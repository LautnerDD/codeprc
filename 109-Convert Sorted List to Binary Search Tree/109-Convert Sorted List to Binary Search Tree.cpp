
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head)return NULL;
        if(!head->next)return new TreeNode(head->val);
        ListNode *slow=head,*fast=head,*last=slow;
        while(fast->next&&fast->next->next){
            last=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=slow->next;
        last->next=NULL;
        TreeNode* res=new TreeNode(slow->val);
        if(head!=slow)res->left=sortedListToBST(head);
        res->right=sortedListToBST(fast);
        return res;
    }
};