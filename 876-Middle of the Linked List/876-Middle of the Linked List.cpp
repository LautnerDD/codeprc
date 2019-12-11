/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
        
//         ListNode* slow=head;
//         ListNode* fast=head;
//         if(head==NULL||head->next==NULL) return head;
//         while(slow->next&&fast->next->next){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         if(fast->next)
//             return slow->next;
//         else
//             return slow;
//     }
// };
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        if (head == NULL|| head->next == NULL) return head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};