//
// Created by Hansen Li on 4/11/23.
//
#include "../include/Stack.h"

using namespace std;

void test_32(){
    string s1 = "(()";
    string s2 = ")()())";
    auto res = longestValidParentheses(s2);
    cout<<res<<endl;
}


void test_STDStack() {
    std::stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);


    std::stack<int> s2;
    s2.push(5);
    s2.push(6);
    s2.push(7);
    cout <<"s1: "<< s1.top() << " " << &s1 << endl;
    cout <<"s2: "<< s2.top() << " " << &s2 << endl;

    s1.swap(s2);

    cout <<"s1: "<< s1.top() << " " << &s1 << endl;
    cout <<"s2: "<< s2.top() << " " << &s2 << "  ";


    cout << "//swap does not change the address, but copies all the elems. "<<endl;

    cout<<endl;
    cout<< "swap two stacks with different sizes" <<endl;
    std::stack<int> s3;
    s3.push(8);
    s3.push(9);
    s1.swap(s3);
    cout << s1.top() << " size:"<< s1.size()<<endl;
    cout << s3.top() << " size:" <<s3.size()<< endl;
}