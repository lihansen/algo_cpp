//
// Created by Hansen Li on 4/22/23.
//
#include "../../include/Array.h"
//void test_dinstSubArray(){
//    int a[5] = {2,1,3,2,3};
//    distinctSubarray(a, 5);
//}

void test_36() {
    vector<vector<char>> board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.',},
                                  {'6', '.', '.', '1', '9', '5', '.', '.', '.',},
                                  {'.', '9', '8', '.', '.', '.', '.', '6', '.',},
                                  {'8', '.', '.', '.', '6', '.', '.', '.', '3',},
                                  {'4', '.', '.', '8', '.', '3', '.', '.', '1',},
                                  {'7', '.', '.', '.', '2', '.', '.', '.', '6',},
                                  {'.', '6', '.', '.', '.', '.', '2', '8', '.',},
                                  {'.', '.', '.', '4', '1', '9', '.', '.', '5',},
                                  {'.', '.', '.', '.', '8', '.', '.', '7', '9',},};
    auto res = isValidSudoku(board);
    cout<<res;
}

void test_11(){
//    vector <int> height = {1,8,6,2,5,4,8,3,7};
    vector <int> height = {1, 1};
    auto res = maxArea(height);
    cout<<res;
}