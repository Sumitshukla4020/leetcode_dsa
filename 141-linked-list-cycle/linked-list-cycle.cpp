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
    bool hasCycle(ListNode *head) {
        // if(head==NULL){
        //     return NULL;
        // }
        // map<ListNode*,bool> man;
        // ListNode* temp=head->next;
        // while(temp!=NULL){
        //     if(man[temp]==true){
        //         return true;
        //     }
        //     man[temp]=true;
        //     temp=temp->next;
            

        // }
        // return false;

        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && slow!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
            if(fast==slow){
                return true;
            }
        }
        return false;

    }
};