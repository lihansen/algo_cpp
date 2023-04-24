//
// Created by Hansen Li on 4/12/23.
//

#include "../include/Sorting.h"

void test_InsertionSort(){
    int a[5] = {5,4,3,2,1};
    InsertionSort(a, 5);
    for(int i=0;i<5; i++){
        std::cout<< a[i]<< " ";
    }
    std::cout<<std::endl;
}

void test_SelectionSort(){
    int a[5] = {6,5,7,9,2};
    selectionSort(a, 5);
    for(int i=0;i<5; i++){
        std::cout<< a[i]<< " ";
    }
    std::cout<<std::endl;
}

void test_bubbleSort(){
    int a[5] = {5,4,3,2,1};
    bubbleSort(a, 5);
    for(int i=0;i<5; i++){
        std::cout<< a[i]<< " ";
    }
    std::cout<<std::endl;
}