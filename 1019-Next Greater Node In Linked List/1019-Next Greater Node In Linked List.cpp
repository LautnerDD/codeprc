/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> mid;
        if(head==NULL)return mid;
        while(head){
            mid.push_back(head->val);
            head=head->next;
        }
        vector<int> res(mid.size());
        stack<int> s;
        for(int i=0;i<mid.size();i++){
            while(!s.empty()&&mid[i]>mid[s.top()]){
                res[s.top()]=mid[i];
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            res[s.top()]=0;
            s.pop();
        }
        return res;
        
    }
};