//
// Created by Hansen Li on 4/11/23.
//

#include "../include/QuickSelection.h"
using namespace std;
void test_QSelection(){

    int input [] = {3, 2, 1, 5, 6, 4};
    auto res = kthSmallest(input, 0, 5, 6 - 2 + 1);
    cout << res << endl;


}

void test_KthLargest(){
    int input [] = {3, 2, 1, 5, 6, 4};
    auto res = kth_largest(input, 0, 5, 2);
    cout << res << endl;

}