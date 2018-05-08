/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int minDepth(struct TreeNode* root) {
    if(root == NULL)
        return 0;
    else if(root->left == NULL)
        return minDepth(root->right)+1;
    else if(root->right == NULL)
        return minDepth(root->left)+1;
    else
        return min(minDepth(root->right)+1,minDepth(root->left)+1);
}