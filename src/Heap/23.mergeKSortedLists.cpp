//
// Created by Hansen Li on 4/11/23.
//

#include <iostream>
#include "../../include/LinkedList.h"
#include <queue>
using namespace std;

struct node{
    int val;
    ListNode *p;
    bool operator < (const node & rhs) const{
        return val > rhs.val;
    }
};



priority_queue <node> q;

ListNode* mergeKLists(vector<ListNode*>& lists) {
    ListNode dummy;
    ListNode * ptr = &dummy;
    for (auto elem:lists){
        if (elem){
            q.push({elem->val, elem});
        }
    }

    while(!q.empty()){
        auto min_node = q.top();
        q.pop();

        ptr->next = min_node.p;
        ptr = ptr->next;

        if (min_node.p->next){
            q.push(
                    {min_node.p->next->val, min_node.p->next}
            );
        }

    }
    return dummy.next;
}