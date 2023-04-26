//
// Created by Hansen Li on 4/25/23.
//
#include "../../include/BackTracking.h"
#include <unordered_map>
//Input: digits = "23"
//Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
namespace letterCombin{
    vector<char> combin;
    vector<string> res;
    unordered_map<int, string> keyboard = {
            {2, "abc"},
            {3, "def"},
            {4, "ghi"},
            {5, "jkl"},
            {6, "mno"},
            {7, "pqrs"},
            {8, "tuv"},
            {9, "wxyz"},
    };


    void dfs(string &digits, int idx) {
        if (idx == digits.size()) {
            string s;
            for (auto c: combin) {
                s.push_back(c);
            }
            if (s.size())
                res.push_back(s);
        }
        if (idx < digits.size()) {
            char c = digits.at(idx);
            int num = int(c - '0');
            string letters = keyboard[num];
            for (char letter: letters) {
                combin.push_back(letter);
                dfs(digits, idx + 1);
                combin.pop_back();
            }
        }
    }


}
using namespace letterCombin;
vector<string> letterCombinations(string digits) {
    dfs(digits, 0);
    return res;
}