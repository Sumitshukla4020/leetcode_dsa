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
    vector<ListNode*> solve1(ListNode* head, int k, int size) {
        vector<ListNode*> ans;
        ListNode* temp = head;
        
        
        while (temp != NULL) {
            ListNode* nextNode = temp->next;
            temp->next = NULL;
            ans.push_back(temp);
            temp = nextNode;
        }
        
        
        int diff = k - size;
        for (int i = 0; i < diff; i++) {
            ans.push_back(NULL);
        }
        
        return ans;
    }

    
    vector<ListNode*> solve2(ListNode* head, int k, int div, int remainder) {
        vector<ListNode*> ans;
        ListNode* temp = head;

        
        for (int i = 0; i < k; i++) {
            ListNode* partHead = temp;
            ListNode* prev = NULL;

            
            int currentPartSize = div + (remainder > 0 ? 1 : 0);
            remainder--;

            
            for (int j = 0; j < currentPartSize; j++) {
                prev = temp;
                temp = temp->next;
            }

            if (prev != NULL) {
                prev->next = NULL; 
            }

            ans.push_back(partHead); 
        }

        return ans;
    }

    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        int size = 0;
        ListNode* temp = head;
        
        
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }

        
        if (size <= k) {
            return solve1(head, k, size);
        }

        
        int div = size / k;
        int remainder = size % k;

        
        return solve2(head, k, div, remainder);
    }
};
