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
    vector<string> res;
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root)
        {
            binaryTreePaths(root,to_string(root->val));
        }
        return res;
    }
    void binaryTreePaths(TreeNode* p,string s)
    {
        if(p->left == NULL && p->right ==NULL)
        {
            res.push_back(s);
            return;
        }
        if(p->left) binaryTreePaths(p->left,s + "->" + to_string(p->left->val));
        if(p->right) binaryTreePaths(p->right,s + "->" + to_string(p->right->val));
    }
};