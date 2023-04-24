//
// Created by Hansen Li on 4/22/23.
//


#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;


#include <iostream>
#include <unordered_set>
#include <vector>


//int countDistinctSubarrays(const std::vector<int>& arr) {
//    int n = arr.size();
//    std::unordered_map<int, int> freq;
//    int count = 0;
//    int left = 0, right = 0;
//
//
//    while (right < n) {
//        freq[arr[right]]++;
//        while (freq.size() > (right - left + 1)) { // dict num > arr len
//            freq[arr[left]]--;
//            if (freq[arr[left]] == 0) { // dict num > arr len
//                freq.erase(arr[left]);
//            }
//            left++;
//        }
//
//        if (freq.size() == (right - left + 1)) {
//            count++;
//        }
//        right++;
//    }
//    return count;
//}
//int main() {
//    std::vector<int> arr = {2, 1, 3, 3,1,2};
//    int count = countDistinctSubarrays(arr);
//    std::cout << "Total number of sub-arrays with distinct elements: " << count << std::endl;
//    return 0;
//}