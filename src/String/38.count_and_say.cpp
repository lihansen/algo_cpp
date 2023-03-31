//
// Created by Hansen Li on 3/30/23.
//

#include <string>
using namespace std;

string countAndSay(int n) {
    if (n == 1)return "1";
    else{
        string say = countAndSay(n-1); // recursion, count the child n-1 string
        string res = "";
        for (int i=0; i<say.size(); i++){
            int count = 0;
            while (i + count < say.size()
                   and say.at(i) == say.at(i+count)){
                count+= 1;
            }
            res.push_back(count + '0');
            res.push_back(say.at(i));
            i += count-1;
        }
        return res;
    }


}

