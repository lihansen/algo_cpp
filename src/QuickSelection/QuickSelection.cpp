//
// Created by Hansen Li on 4/11/23.
//

#include "../../include/Sorting.h"


using namespace std;

// partition in descending order
// function: [smaller elems], [pivot], [greater elems]
// return:   pivot indexing
// todo: choose pivot randomly
int partition_desc(int *arr, int left, int right) {
    int pivot = arr[left]; // choose the first elem as pivot
    // it will be faster on average if choose pivot randomly

    while (left < right) { // until two pointer move to same position
        while (left < right and arr[right] <= pivot) { // satisfy the constraint, greater than the pivot
            right--; // move right pointer to the center
        }
        arr[left] = arr[right]; // position at [right] is greater than pivot, so move it to the [left]
        // pos, which is the previous pivot
        while (left < right and arr[left] >= pivot) { // less than the pivot
            left++; // move left pointer to center
        }
        arr[right] = arr[left]; // position at [left] is greater than the position, so move it to the
        // [right] position, which is the previous [left] position we moved
    }
    arr[left] = pivot;  //
    return left;
}


int kth_largest(int *arr, int left, int right, int k) {
    int pivot = partition_desc(arr, left, right);

    if (pivot - left == k - 1) {
        return arr[pivot];
    } else if (pivot - left > k - 1) {
        return kth_largest(arr, left, pivot - 1, k);
    } else {
        return kth_largest(arr, pivot + 1, right, k - pivot - 1 + left);
        // not in the [left, pivot], so the indexing start at k - pivot - 1 + left
    }

}

// findRoot the kth smallest elem
int kthSmallest(int *arr, int l, int r, int k) {


    int index = Partition(arr, l, r); // using quick sort partition

    if (index - l == k - 1) // start from index, indexing index - l, k-1 elems before index position
        return arr[index]; // findRoot the elem
    else if (index - l > k - 1) {
        return kthSmallest(arr, l, index - 1, k);
    } else {
        return kthSmallest(arr, index + 1, r, k - index + l - 1);
    }


}