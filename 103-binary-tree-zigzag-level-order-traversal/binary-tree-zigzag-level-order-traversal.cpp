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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;

        q.push(root);
        bool k=true;
         vector<vector<int>> a;
         if(!root)return a;

        while(!q.empty()){
            int sz=q.size();

            vector<int>ans;
            for(int i=0;i<sz;i++){
                TreeNode* fr=q.front();
                ans.push_back(fr->val);
            q.pop();
            if(fr->left){
                  q.push(fr->left);
                
            }
            if(fr->right){
                  q.push(fr->right);
                
            }

            }
            if(k){
                a.push_back(ans);
                k=!k;
            }
            else{
                reverse(ans.begin(),ans.end());
                 a.push_back(ans);
                k=!k;

            }



        }
        return a;
    }
};