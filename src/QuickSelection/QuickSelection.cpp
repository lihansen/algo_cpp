//
// Created by Hansen Li on 4/11/23.
//

#include "../../include/Sorting.h"


using namespace std;

int partition_desc(int *arr, int left, int right) {
    int pivot = arr[left];

    while (left < right) {
        while (left < right and arr[right] <= pivot) {
            right--;
        }
        arr[left] = arr[right]; // empty in arr[right]

        while (left < right and arr[left] >= pivot) {
            left++;
        }
        arr[right] = arr[left]; // empty in arr[left]
    }
    arr[left] = pivot;
    return left;
}


int kth_largest(int *arr, int left, int right, int k) {
    int pivot = partition_desc(arr, left, right);

    if (pivot - left == k - 1) return arr[pivot];
    else if (pivot - left > k - 1) return kth_largest(arr, left, pivot - 1, k);
    else return kth_largest(arr, pivot + 1, right, k - pivot - 1 + left);
    // not in the [left, pivot], so the indexing start at k - pivot - 1 + left
}



int kthSmallest(int *arr, int l, int r, int k) {

//    if (k > 0 && k <= r - l + 1) {

    int index = Partition(arr, l, r);

    if (index - l == k - 1)
        return arr[index];
    else if (index - l > k - 1) {
        return kthSmallest(arr, l, index - 1, k);
    } else {
        return kthSmallest(arr, index + 1, r, k - index + l - 1);
    }

//    }

}