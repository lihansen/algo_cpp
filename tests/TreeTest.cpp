//
// Created by Hansen Li on 4/12/23.
//

#ifndef ALGO_CPP_TREETEST_CPP
#define ALGO_CPP_TREETEST_CPP

#include "../include/Tree.h"

void test_TreeUtil() {
    vector<string> s = {"1", "2", "5", "3", "4", "null", "6"};
    auto root = construct_binTree_level(s);
    print_Tree_level(root);

}

void test_construBTree(){
    vector<string> s = {"1", "2", "5", "3", "4", "null", "6"};
    auto root = construct_BTree(s);
    print_Tree_level(root);
}


void test_FlattenBTree(){
    vector<string> s = {"1", "2", "5", "3", "4", "null", "6"};
    auto root = construct_BTree(s);
    flatten(root);
    print_Tree_level(root);
}

#endif //ALGO_CPP_TREETEST_CPP
