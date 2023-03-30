//
// Created by Hansen Li on 3/29/23.
//
#include <iostream>
#include "../include/LinkedList.h"
#include <vector>

using namespace std;



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

ListNode *reverseListRecur(ListNode *head){
    if (head == nullptr || head->next == nullptr){
        return head;
    }
    ListNode * new_head = reverseListRecur(head->next);
    head->next->next = head;
    head->next = nullptr;
    return new_head;
}


void llOutput(ListNode *head) {
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
    for(int i=0; i<v.size(); i++){
        p->next = new ListNode(v[i]);
        p = p->next;
    }
    return dummy->next;
}

void test_ReverseList(){
    vector<int> v = {1,2,3,4,5};
    ListNode *input = createList(v);
    llOutput(input);
    ListNode *output = reverseListRecur(input);
    llOutput(input);
    llOutput(output);
}