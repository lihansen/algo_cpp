//
// Created by Hansen Li on 4/10/23.
//

#ifndef ALGO_CPP_HEAP_H
#define ALGO_CPP_HEAP_H
#include <iostream>
#include <queue>
#include "LinkedList.h"

void left_child(int);
void right_child(int);
void get_parent(int);

void max_heapify(int*, int, int);

int FindKthLargest_Heap(vector<int> & num, int k);

// 23
ListNode * mergeKLists(vector <ListNode*> &);



#endif //ALGO_CPP_HEAP_H