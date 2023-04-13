//
// Created by Hansen Li on 4/13/23.
//
#include "../../include/Sorting.h"

void bubbleSort(int * a, int n){
    for(int i = 0; i<n - 1; i ++){
        for (int j = 0; j < n - i - 1; j ++){
            if(a[j + 1] < a[j]){
                std::swap(a[j + 1], a[j]);
            }
        }
    }
}