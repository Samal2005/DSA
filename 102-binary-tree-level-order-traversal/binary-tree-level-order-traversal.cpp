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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>>a;
        if(!root) return a;
        while(!q.empty()){
            vector<int> ans;
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode* node=q.front();
                ans.push_back(node->val);
                q.pop();
                if(node->left){
                    q.push(node->left);                    
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            a.push_back(ans);


        }
return a;
    }
};