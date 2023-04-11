//
// Created by Hansen Li on 4/10/23.
//
# include<iostream>
using namespace std;

int left_child(int i){
    return i*2 +1;
}

int right_child(int i){
    return i*2 + 2;
}

int get_parent(int i){
    return (i - 1) >> 1;
}


void max_heapify(int *a, int start, int end){
    int parent = start;
    int max_child = left_child(parent);

    while (max_child <= end){
        if (max_child + 1 <= end and a[max_child] <= a[max_child + 1]){
            max_child++; // let max_child be the larger child
        }

        if (a[parent] < a[max_child]){ // trickle up, let tht parent be the largest elem
            std::swap(a[parent], a[max_child]);
            parent = max_child;
            max_child = left_child(parent);
        }else{
            return;
        }
    }
}

