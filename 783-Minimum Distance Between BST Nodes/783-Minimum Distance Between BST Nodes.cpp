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
    int minDiffInBST(TreeNode* root) {
        int max=INT_MAX;
        int visited =-1;
        di(root,max,visited);
        return max;
    }
    void di(TreeNode* root,int &max,int &visited){
        if(!root)return;
        di(root->left,max,visited);
        if(visited!=-1)max=min(max,root->val-visited);
        visited=root->val;
        di(root->right,max,visited);
        
    }
};
