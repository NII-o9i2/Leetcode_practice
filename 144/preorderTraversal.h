#include <vector>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
    vector<int> sub_tree;
    vector<int> out;
    if (root!= nullptr) 
    {
        out.emplace_back(root->val);
        if (root->left != nullptr){
            sub_tree = preorderTraversal(root->left);
            out.insert(out.end(),sub_tree.begin(),sub_tree.end());
        };
        sub_tree.clear();
        if (root->right != nullptr){
            sub_tree = preorderTraversal(root->right);
            out.insert(out.end(),sub_tree.begin(),sub_tree.end());
        };
    }
    return out;
    }
};