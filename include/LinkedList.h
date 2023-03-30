//
// Created by Hansen Li on 3/29/23.
//

#ifndef ALGO_CPP_LINKEDLIST_H
#define ALGO_CPP_LINKEDLIST_H
#include <vector>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverseList(ListNode *head);

void printLinkList(ListNode *head);

ListNode *createList(vector<int> v);

void test_ReverseList();

#endif //ALGO_CPP_LINKEDLIST_H
