//
// Created by Hansen Li on 4/11/23.
//
#include "../include/LinkedList.h"
#include "../include/Heap.h"

void test_23(){
    vector <int> v1 = {1,3,5,7,9};
    vector <int> v2 = {2,4,6,8,8};
    vector <int> v3 = {0,1,5};
    ListNode * l1 = createList(v1);
    ListNode * l2 = createList(v2);
    ListNode * l3 = createList(v3);
    vector<ListNode*> input = {l1,l2,l3}; // construct input vector

    ListNode * output = mergeKLists(input);
    printLinkList(output);
}