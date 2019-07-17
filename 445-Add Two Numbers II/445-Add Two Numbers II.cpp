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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> num1,num2;
        while(l1){
            num1.push(l1->val);
            l1=l1->next;
        }
        while(l2){
            num2.push(l2->val);
            l2=l2->next;
        }
        int sum=0;
        ListNode* res=new ListNode(0);
        while(!num1.empty()||!num2.empty()){
            if(!num1.empty()){
                sum+=num1.top();
                num1.pop();
            }
            if(!num2.empty()){
                sum+=num2.top();
                num2.pop();
            }
            res->val=sum%10;
            ListNode* mid=new ListNode(sum/10);
            mid->next=res;
            res=mid;
            sum=sum/10;
            
        }
        return res->val==0?res->next:res;
    }
};