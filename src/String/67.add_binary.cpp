//
// Created by Hansen Li on 3/30/23.
//

//#include "../../include/_67_add_binary.h"
#include <string>
#include <iostream>
using namespace std;
string My_addBinary(string a, string b){
    string res;
    char carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;


    while (i >= 0 and j >= 0){
        carry += (a[i] - '0') + (b[j] - '0');
        res.push_back(char(carry%2) + '0');
        carry /= 2;
        i--;
        j--;
    }
    while (i>=0){
        carry += a[i] - '0';
        res.push_back(carry%2 + '0');
        carry /= 2;
        i--;
    }
    while (j>=0){
        carry += b[j] - '0';
        res.push_back(carry%2 +'0');
        carry /= 2;
        j--;
    }

    if (carry ){
        res.push_back(carry + '0');
    }
    reverse(res.begin(), res.end());
    return res;
}



string addBinary(string a, string b) {
    string ans;  // 存储二进制数相加后的结果
    reverse(a.begin(), a.end());  // 将 a 字符串翻转
    reverse(b.begin(), b.end());  // 将 b 字符串翻转

    int n = max(a.size(), b.size()), carry = 0;  // 计算 a 和 b 的最大长度 n，以及进位 carry 的初始值
    for (size_t i = 0; i < n; ++i) {  // 从低位到高位逐位相加
        carry += i < a.size() ? (a.at(i) == '1') : 0;  // 如果 a 还有位数，将 a 的该位转化成数字加到进位上
        carry += i < b.size() ? (b.at(i) == '1') : 0;  // 如果 b 还有位数，将 b 的该位转化成数字加到进位上
        ans.push_back((carry % 2) ? '1' : '0');  // 计算当前位的数字并添加到结果字符串中
        carry /= 2;  // 计算进位
    }

    if (carry) {  // 如果还有进位，将进位添加到结果字符串最高位
        ans.push_back('1');
    }
    reverse(ans.begin(), ans.end());  // 将结果字符串翻转

    return ans;  // 返回二进制数相加后的结果
}

