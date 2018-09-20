/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	//对p,q分别在根节点的两边进行判断
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left,p,q);
        else if(p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right,p,q);
        else 
            return root;
    }
};