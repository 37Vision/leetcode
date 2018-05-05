/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool cmp(struct TreeNode* l,struct TreeNode* r)
{
    if(l == NULL && r == NULL)
        return true;
    else if(l == NULL || r == NULL)
        return false;
    else if (l->val != r->val)
        return false;
    else
        return cmp(l->left,r->right) && cmp(l->right,r->left);
}

bool isSymmetric(struct TreeNode* root) {
   if(root == NULL)
       return true;
    return cmp(root->left,root->right);
}

