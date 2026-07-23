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
    int i=0;
    map<int,int>mp;
 TreeNode* build(vector<int>& preorder, vector<int>& inorder, int l, int r) {

    if (l > r)
        return nullptr;

    TreeNode* rt = new TreeNode(preorder[i++]);

    int m = mp[rt->val];

    rt->left = build(preorder, inorder, l, m - 1);
    rt->right = build(preorder, inorder, m + 1, r);

    return rt;
}
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder;
        inorder=preorder;
        sort(inorder.begin(),inorder.end());
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return build(preorder,inorder,0,inorder.size()-1);
        

        
    }
};