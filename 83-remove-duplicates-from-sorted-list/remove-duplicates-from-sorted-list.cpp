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
private:
    int size(ListNode* head){
        ListNode* leela =head;
        int count = 0;
        while(leela!=NULL){
            leela = leela->next;
            count++;
        }
        return count;
    }
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        int n;
        n=size(head);
        if(n==0 || n==1){
            return head;
        }
        if (n==2){
            ListNode* post = temp->next;
            if(post->val==temp->val){
                temp->next=NULL;
                delete post;
                return head;
            }
            else{
                return head;
            }
        }
        ListNode* ham = temp->next;
        while(ham!=NULL){
            ListNode* post = temp->next;
            if(temp->val == post->val){
                temp->next = post->next;
                post->next=NULL;
                delete post;
            }
            else{
                temp=post;
                post=temp->next;

            }
            ham=temp->next;
        }
        return head;
    }
};