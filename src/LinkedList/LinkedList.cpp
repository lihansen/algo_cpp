//
// Created by Hansen Li on 3/29/23.
//
#include <iostream>
#include "../../include/LinkedList.h"
#include <vector>

using namespace std;


void printLinkList(ListNode *head) {
    while (head) {
        cout << head->val;
        cout << " -> ";
        head = head->next;
    }
    cout << "Null" << endl;
}

ListNode *createList(vector<int> v) {
    ListNode *dummy = new ListNode();
    ListNode *p = dummy;
    for (int i = 0; i < v.size(); i++) {
        p->next = new ListNode(v[i]);
        p = p->next;
    }
    return dummy->next;
}
