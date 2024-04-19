/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getlen(ListNode* head){
        int len =0;
        ListNode* cur = head;
        while(cur!=NULL){
            cur=cur->next;
            len++;
        }
        return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int num = getlen(head);
        if(num<k){
            return head;
        }
        int x=k;

        ListNode* prev=NULL;
        ListNode* cur=head;
        ListNode* forw=NULL;

        while(x--){
            forw=cur->next;
            cur->next=prev;
            prev=cur;
            cur=forw;
        }

        if(forw!=NULL){
            head->next=reverseKGroup(forw,k);
        }

        return prev;

    }
};