//
// Created by Hansen Li on 4/25/23.
//
#include "../../include/BackTracking.h"

void test_17(){

    string digits = "23";
    auto res = letterCombinations(digits);
    for(const auto & re : res){
        cout<< re << " ";
    }
    cout<<endl;

}