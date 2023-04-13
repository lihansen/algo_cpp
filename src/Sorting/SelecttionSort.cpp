//
// Created by Hansen Li on 4/12/23.
//

#include "../../include/Sorting.h"


void selectionSort(int * arr, int n){
    for(int i=0; i< n-1; i ++){
        int ith_min = i;
        for (int j=i+1; j< n; j++){
            if (arr[j] < arr[ith_min]){
                ith_min = j;
            }
        }
        std::swap(arr[ith_min], arr[i]);
    }
}