//
// Created by Hansen Li on 4/10/23.
//
#include "../../include/Heap.h"
#include <iostream>


void heap_sort(int *a, int len_a){
    int non_leave = ((len_a ) >> 1) - 1;
    for(int i=non_leave; i>=0; i--){
        max_heapify(a, i, len_a - 1);
    }

    for (int i=len_a - 1; i>=0; --i){
        std::swap(a[i], a[0]);
        max_heapify(a, 0, i - 1);
    }
}