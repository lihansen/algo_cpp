//
// Created by Hansen Li on 4/11/23.
//
#include "../include/LinkedList.h"
#include "../include/Heap.h"

using namespace std;

void test_215_Heap() {
    vector<int> input = {3, 2, 1, 5, 6, 4};
    auto res = FindKthLargest_Heap(input, 2);

    cout << res << endl;
}




void test_buildHeapInPlace() {
    vector<int> v = {8, 5, 4, 9, 3, 2};
    cout << "vector make heap:" << endl;
    std::make_heap(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "priority queue:" << endl;
    priority_queue<int> q(v.begin(), v.end());

    for (int i = 0; i < q.size(); i++) {
        cout << v[i] << " ";
    }

}


void test_23() {
    vector<int> v1 = {1, 3, 5, 7, 9};
    vector<int> v2 = {2, 4, 6, 8, 8};
    vector<int> v3 = {0, 1, 5};
    ListNode *l1 = createList(v1);
    ListNode *l2 = createList(v2);
    ListNode *l3 = createList(v3);
    vector<ListNode *> input = {l1, l2, l3}; // construct input vector

    ListNode *output = mergeKLists(input);
    printLinkList(output);
}