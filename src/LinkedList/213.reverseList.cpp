//
// Created by Hansen Li on 3/29/23.
//
#include <iostream>
#include "../../include/LinkedList.h"
#include <vector>

using namespace std;

// two pointer, iteration
ListNode *reverseList(ListNode *head) {
    ListNode *prev = nullptr;
    ListNode *curr = head;

    while (curr) {
        ListNode *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

// recursion
ListNode *reverseListRecur(ListNode *head){
    if (head == nullptr || head->next == nullptr){
        return head;
    }
    ListNode * new_head = reverseListRecur(head->next);
    head->next->next = head;
    head->next = nullptr;
    return new_head;
}


