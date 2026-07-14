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
    bool mr(TreeNode* p,TreeNode* q){
        if(p==nullptr && q==nullptr)return 1;
        if(p==nullptr || q==nullptr)return 0;
        if(p->val!=q->val)return 0;
        return mr(p->left,q->right) && mr(p->right,q->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return mr(root->left,root->right);
        
    }
};