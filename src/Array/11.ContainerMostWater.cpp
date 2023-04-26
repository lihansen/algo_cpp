//
// Created by Hansen Li on 4/25/23.
//
#include "../../include/Array.h"

int maxArea(vector<int> &height) {
    int left = 0;
    int right = int(height.size() - 1);
    int vol = 0;
    while (left < right) {
        vol = max(vol, min(height[left], height[right]) * (right - left));
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return vol;
}