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
    vector<TreeNode*> allPossibleFBT(int N) {
        if(N==1)return{new TreeNode(0)};
        if(N%2==0)return {};
        vector<TreeNode*> res;
        for(int i=1;i<N;i+=2){
            vector<TreeNode*> left=allPossibleFBT(i);
            vector<TreeNode*> right=allPossibleFBT(N-1-i);
            for(auto& a:left){
                for(auto& b:right){
                    TreeNode* diss=new TreeNode(0);
                    diss->left=a;
                    diss->right=b;
                    res.push_back(diss);
                    
                }
            }
            
        }
        return res;
    }
};