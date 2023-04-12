//
// Created by Hansen Li on 4/11/23.
//

#include "../../include/Heap.h"

using namespace std;


//Input: nums = [3,2,1,5,6,4], k = 2
//Output: 5

// complexity:
//      build heap: O(k)
//      push & pop: O( log(k) * (n-k) ) = O(nlogk) = O(nlogn)


// min heap with size K

int FindKthLargest_Heap(vector<int> & num, int k){
    vector <int> v;
    for (int i = 0; i< k; i++){
        v.push_back(num[i]);
    }

    std::make_heap(v.begin(), v.end(), std::greater<int>()); // build heap in place

    priority_queue <int, vector<int>, std::greater<int>> q(v.begin(), v.end()); // convert to priority queue

    for (int i = k ; i< num.size(); i++){
        q.push(num[i]);
        q.pop();
    }

    return q.top();
}
