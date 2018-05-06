/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* binary_search(int low,int high,int* nums);
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return binary_search(0,numsSize-1,nums);
}
//二分查找
struct TreeNode* binary_search(int low,int high,int* nums)
{
    if(low > high)
        return NULL;
    else
    {
        struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        int mid = (high - low)/2 + low; 
        root->val = nums[mid];
        root->left = binary_search(low,mid-1,nums);
        root->right = binary_search(mid+1,high,nums);
        return root;
    }
}