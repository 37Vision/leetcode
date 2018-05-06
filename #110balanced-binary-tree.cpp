/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isBalanced(struct TreeNode* root) {
    if(root == NULL)
        return true;
    if(abs(maxDepth(root->left) - maxDepth(root->right)) <= 1) //如果当前结点满足平衡二叉树条件则判断左右子树
        return isBalanced(root->left) && isBalanced(root->right);
    else
        return false;
}
//求高度
int maxDepth(struct TreeNode* root) {
    if(root == NULL)
        return 0;
    int l = maxDepth(root->left);
    int r =  maxDepth(root->right);
    return l > r ? l + 1:r + 1;
}