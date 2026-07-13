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
        queue<TreeNode*>q;
        vector<vector<int>>a;
        if(!root)return a;
        q.push(root);
        while(!q.empty()){
            vector<int>ans;
            int sz=q.size();
            for(int i=0;i<sz;i++){
                  TreeNode*fr=q.front();
                  
            q.pop();
            ans.push_back(fr->val);
            if(fr->left){
                q.push(fr->left);
            }
            if(fr->right){
                q.push(fr->right);
            }

            }
            a.push_back(ans);
          
        }
        return a;
        
    }
};