//
// Created by Hansen Li on 4/11/23.
//
#include "../../include/QuickSelection.h"
#include <vector>
int findKthLargest(std::vector<int> &nums, int k) {

    return kth_largest(&nums[0], 0, nums.size() - 1, k);
    // convert a vector to a array: just put the address of the first elem into it
}


