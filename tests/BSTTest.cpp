//
// Created by Hansen Li on 4/14/23.
//

//#include <string>
//#include <vector>
#include "../include/Tree.h"

//using namespace std;


void test_validBST() {
    vector<string> s = {"2", "1", "3"};
    auto root = construct_BTree(s);
    print_Tree_level(root);
    bool res = isValidBST(root);

    cout << (res ? "true" : "false") << endl;

}