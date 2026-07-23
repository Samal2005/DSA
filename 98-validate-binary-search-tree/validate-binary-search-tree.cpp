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
    void f(TreeNode* root,vector<int>&arr){
        if(!root)return;
        f(root->left,arr);
        arr.push_back(root->val);
             f(root->right,arr);

    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int>arr;
        f(root,arr);
        int n=arr.size();
        for(int k=0;k<n-1;k++){
            if(arr[k]>=arr[k+1])return 0;
        }
        return 1;
        
    }
};