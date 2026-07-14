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
void t( vector<int>&ans,TreeNode*r,int l){
    if(r==nullptr)return;
    if(ans.size()==l)ans.push_back(r->val);
    t(ans,r->right,l+1);
     t(ans,r->left,l+1);

}
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
    

        t(ans,root,0);
        return ans;

        
        
    }
};