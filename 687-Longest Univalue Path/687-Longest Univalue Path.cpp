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
    int longestUnivaluePath(TreeNode* root) {
        int res=0;
        di(root,res);
        return res;
    }
    int di(TreeNode* root,int& res){
        if(!root)return 0;
        int left=di(root->left,res);
        int right=di(root->right,res);
        if(root->left&&root->val==root->left->val)
            left++;
        else left=0;
        if(root->right&&root->val==root->right->val)
            right++;
        else right =0;
        res=max(res,left+right);
        return max(left,right);
    }
};