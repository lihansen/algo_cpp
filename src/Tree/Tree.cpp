//
// Created by Hansen Li on 4/11/23.
//


#include "../../include/Tree.h"
#include "../../include/Heap.h"
#include <queue>
using namespace std;


void helper(vector<string> vals, TreeNode * root, int index){
    int l_idx = left_child(index);
    int r_idx = right_child(index);

    if (l_idx < vals.size() and vals[l_idx] != "null"){
        root->left = new TreeNode(stoi(vals[l_idx]));
    }
    if (r_idx < vals.size() and vals[r_idx] != "null"){
        root->right = new TreeNode(stoi(vals[r_idx]));
    }
    if (root->left) helper(vals, root->left, l_idx);
    if (root->right) helper(vals, root->right, r_idx);
}


//Input: root = [1,2,5,3,4,null,6]
TreeNode * construct_binTree_level(vector<string> vals){
    if(vals.empty() or vals[0] == "null"){
        return nullptr;
    }else{
        TreeNode * root = new TreeNode(stoi(vals[0]));
        helper(vals, root, 0);
        return root;
    }
}


void print_Tree_level(TreeNode * root){
    queue <TreeNode*> q;
    q.push(root);

    while (!q.empty()){
        auto node = q.front();
        if (node == nullptr) cout<< "null ";
        else {
            cout<<node->val <<" ";
            if (node->left or node->right){
                q.push(node->left);
                q.push(node->right);
            }
        }
        q.pop();
    }
    cout<<endl;
}