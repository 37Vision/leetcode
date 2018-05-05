/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root == NULL)
        return 0;
    int l = maxDepth(root->left); //左子树深度 
    int r =  maxDepth(root->right);//右子树深度 
    return l > r ? l + 1:r + 1;
}
