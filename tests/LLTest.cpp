//
// Created by Hansen Li on 4/11/23.
//

#include "../include/LinkedList.h"


void test_ReverseList() {
    vector<int> v = {1, 2, 3, 4, 5};
    ListNode *input = createList(v);
    printLinkList(input);
    ListNode *output = reverseListRecur(input);
    printLinkList(input);
    printLinkList(output);
}


