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
int checkBst(TreeNode* root){
    if(!root)return 0;
    int l=checkBst(root->left);
    int r=checkBst(root->right);
    if(l==-1)return -1;
    if(r==-1)return -1;
    if(abs(l-r)>1)return -1;
    return 1+max(l,r);
    
}
public:
    bool isBalanced(TreeNode* root) {
     int x=   checkBst(root);
     if(x==-1){
        return 0;
     }
     return 1;
        
    }
};