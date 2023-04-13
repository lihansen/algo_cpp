//
// Created by Hansen Li on 4/12/23.
//

#ifndef ALGO_CPP_TREE_H
#define ALGO_CPP_TREE_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *construct_binTree_level(vector<string>);

void print_Tree_level(TreeNode *root);

void flatten(TreeNode *);

TreeNode * construct_BTree(vector <string> );
#endif //ALGO_CPP_TREE_H
