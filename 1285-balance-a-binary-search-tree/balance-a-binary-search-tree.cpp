/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> arr;
    void inorder(TreeNode* root){
        if(root==NULL){
            return ;
        }
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
        return ;

    }
    TreeNode* help(vector<int>& nums,int i,int j){
        if(i>j){
            return NULL;
        }
        int mid=(i+j)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = help(nums,i,mid-1);
        root->right = help(nums,mid+1,j);
        return root;
    } 
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);

        TreeNode* temp =  help(arr,0,arr.size()-1);

        return temp;
    }
};