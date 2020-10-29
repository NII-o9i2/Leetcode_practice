#include<vector>
#include<set>
#include <utility>
#include <string>
#include <typeinfo>
#include <iomanip>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int recursion(int sum, int cur,TreeNode* root){
        if ((root->left == nullptr) && (root->right == nullptr)){
            return sum += cur * 10 + root->val;
        }
        int sum_;
        if (root->left != nullptr){
            sum_ = recursion(sum,cur*10+root->val,root->left);
        }
        if (root->right != nullptr){
            sum_ = recursion(sum,cur*10+root->val,root->right);
        }
        return sum_;
    }
    int sumNumbers(TreeNode* root) {
        return recursion(int(0),int(0),root);
    }
};