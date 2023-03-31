//
// Created by Hansen Li on 3/29/23.
//

#ifndef ALGO_CPP_SORTING_H
#define ALGO_CPP_SORTING_H


void QuickSort_recur(int A[], int low, int high);

//template<typename T>
//void QuickSort_iter(T arr[], const int len);

// 声明一个结构体 Range，用于记录排序范围
struct Range {
    int start;  // 范围起始下标
    int end;    // 范围终止下标
    Range(int s = 0, int e = 0): start(s), end(e) {}
};

// 快速排序函数，使用迭代实现
template<typename T>
void QuickSort_iter(T arr[], const int len) {
    // length of the arr less than 1
    if (len <= 0) return;

    // 定义一个 Range 数组，用于存储未排序的范围
    Range r[len]; // array r used for store the unsorted range
    int p = 0;  // r 数组的指针，指向下一个未排序的范围
    r[p++] = Range(0, len - 1);  // 将整个数组的范围存储到 r 数组中

    // 使用 while 循环，处理未排序的范围，直到 r 数组为空
    while (p) {
        // 取出 r 数组的最后一个 Range 对象
        Range range = r[--p];

        // 如果范围的起始下标大于等于终止下标，说明这个范围已经排好序，跳过这个范围的处理
        if (range.start >= range.end) continue;

        // 选择数组的最后一个元素作为中间元素 mid
        T mid = arr[range.end];

        // 定义左右指针 left 和 right
        int left = range.start;
        int right = range.end - 1;

        // this is the partition part as the recursion version above
        while (left < right) {
            // 从左到右找到第一个大于等于 mid 的元素
            while (arr[left] < mid && left < right) left++;
            // 从右到左找到第一个小于 mid 的元素
            while (arr[right] >= mid && left < right) right--;
            // 交换这两个元素
            std::swap(arr[left], arr[right]);
        }

        // 将最后一个元素（即中间元素）与左侧已排好序的最后一个元素交换位置
        // 以确保中间元素左侧的元素都小于等于中间元素，右侧的元素都大于中间元素
        if (arr[left] >= arr[range.end])
            std::swap(arr[left], arr[range.end]);
        else
            left++;

        // 将排序范围拆分成左右两个部分，将左半部分和右半部分的范围存储到 Range 数组中
        r[p++] = Range(range.start, left - 1);
        r[p++] = Range(left + 1, range.end);
    }
}


#endif //ALGO_CPP_SORTING_H
