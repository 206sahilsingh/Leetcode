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
    void sum(TreeNode* root,int &k,int &ans){
        if(!root)
            return;

        sum(root->left,k,ans);
        k--;
        if(k==0){
            ans=root->val;
            return;
        }
        if(k<0)
            return;
        sum(root->right,k,ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        int ans=0;
        sum(root, k,ans);
        return ans;
    }
};