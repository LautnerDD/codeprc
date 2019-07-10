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
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(L==R)return L;
        int sum=0,sig=0;
        di(root,L,R,sum,sig);
        return sum;
    }
    void di(TreeNode* root,int L,int R,int &sum,int &sig){
        if(!root)return;
        di(root->left,L,R,sum,sig);
        if(root->val==L)sig=1;
        if(sig==1) sum+=root->val;
        if(root->val==R)sig=0;
        di(root->right,L,R,sum,sig);
        return;
    }
};