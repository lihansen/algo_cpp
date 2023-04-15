//
// Created by Hansen Li on 4/14/23.
//

#include "../../../include/Tree.h"
bool helper(TreeNode * root, int upper, int lower){
    if (! root) return true;

    if (root->val < lower or root->val > upper){
        return false;
    }

    return helper(root->left, root->val, lower) and helper(root->right, upper, root->val);
}


bool isValidBST(TreeNode* root) {
    return helper(root, INT32_MAX, INT32_MIN);
}

