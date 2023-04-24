//
// Created by Hansen Li on 4/11/23.
//
#include "../../include/Stack.h"
using namespace std;

int longestValidParentheses(string s){
    int max_len = 0;
    std::stack <int> stk;

    stk.push(-1); // assume there is a ")" indexing with -1 before the start of the string

    for (int i = 0;i < s.size(); i++){ // findRoot the last unmatched right bracket ")"
        if (s.at(i) == '('){
            stk.push(i); // any "(" push it into the stack
        }else{
            stk.pop();  // must pop one elem first, because it needs the length

            if (stk.empty()){ // stack empty means this ")" is the last unmatched
                stk.push(i);
            }else{
                max_len = std::max(max_len, i - stk.top()); // the current ")" - the index of last unmatched ")"
                                                            // is the length of the hasCycle clause, such as )"()()"
            }
        }
    }

    return max_len;

}