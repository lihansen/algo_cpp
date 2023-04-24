//
// Created by Hansen Li on 3/29/23.
//
#include <iostream>

using namespace std;

// recursion version
// take the first elem as pivot
// put all the elems less than pivot on the left side
// put all the elems greater than the pivot on the right side
// return the indexing of pivot

int Partition(int A[], int low, int high) {
    int pivot = A[low]; // select the first elem as the pivot
    while (low < high) { // iterate until low equals high
        while (low < high and A[high] >= pivot) {
            --high; // move the high index to the first elem smaller than the pivot
        }
        A[low] = A[high]; // move this elem in the front of the array
        while (low < high and A[low] <= pivot) {
            ++low; // findRoot the first elem larger than the pivot
        }
        A[high] = A[low]; // move this elem to the rear of the array without order
    }
    A[low] = pivot; // move the pivot to the position of low == high
    return low;
}


void QuickSort_recur(int A[], int low, int high) {
    if (low < high) { // more than one elem in this range
        int pivot = Partition(A, low, high); // findRoot the pivot
        QuickSort_recur(A, low, pivot - 1); // {0 to pivot - 1} is without order, so sort it
        QuickSort_recur(A, pivot + 1, high); // {pivot + 1, high} is the same above
    }
}


