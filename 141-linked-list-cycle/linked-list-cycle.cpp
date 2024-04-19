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
        if(head==NULL){
            return NULL;
        }
        map<ListNode*,bool> man;
        ListNode* temp=head->next;
        while(temp!=NULL){
            if(man[temp]==true){
                return true;
            }
            man[temp]=true;
            temp=temp->next;
            

        }
        return false;
    }
};