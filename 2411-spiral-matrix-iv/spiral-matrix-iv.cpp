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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1));
        int sr=0;
        int sc=0;
        int er= ans.size()-1;
        int ec= ans[0].size()-1;
        ListNode* temp = head;
        while(temp!=NULL){
            for(int i=sc;i<=ec;i++){
                ans[sr][i] = temp->val;
                if(temp->next==NULL){
                    return ans;
                }
                temp = temp->next;
                
            }
            sr++;
            for(int i=sr;i<=er;i++){
                ans[i][ec] = temp->val;
                if(temp->next==NULL){
                    return ans;
                }
                temp = temp->next;
                
            }
            ec--;
            if(sr<=er){
            for(int i=ec;i>=sc;i--){
                ans[er][i] = temp->val;
                if(temp->next==NULL){
                    return ans;
                }
                temp = temp->next;
                
            }
            er--;
            }
            if(sc<=ec){
            for(int i=er;i>=sr;i--){
                ans[i][sc] = temp->val;
                if(temp->next==NULL){
                    return ans;
                }
                temp = temp->next;
                
            }
            sc++;}
        }
        return ans;
    }
};