/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool path(struct TreeNode* root, int sum);
bool hasPathSum(struct TreeNode* root, int sum) {
    if(!root)
        return false;
    return path(root,sum);
}
bool path(struct TreeNode* root, int sum)
{
    if(root->left)
        root->left->val += root->val;
    if(root->right)
        root->right->val += root->val;
	//判断是否是根节点
    if(!root->left&&!root->right)
    {
        if(root->val == sum)
            return true;
        else
            return false;
    }
    return hasPathSum(root->left,sum) || hasPathSum(root->right,sum);
}