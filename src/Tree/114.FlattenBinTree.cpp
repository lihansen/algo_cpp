//
// Created by Hansen Li on 4/12/23.
//
#include "../../include/Tree.h"

//Input: root = [1,2,5,3,4,null,6]
//Output: [1,null,2,null,3,null,4,null,5,null,6]

// The flatten result, the list, is the preorder traverse
// but is a post-order from the back to the front
// so we need to construct this list in post-order
// The var 'pre' stores the previous visited node
// after visiting, the current visiting node is the pre for the next visiting

TreeNode *pre = nullptr;

void flatten(TreeNode *root) {
    if (!root) return;

    flatten(root->right); // this is a post-order traverse
    flatten(root->left);

    root->right = pre; // link the previous visited node
    root->left = nullptr; // make all the left pointer null
    pre = root; // let current node be pre
}