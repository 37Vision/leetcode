/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
 //求深度
int maxDepth(struct TreeNode* root) {
    if(root == NULL)
        return 0;
    int l = maxDepth(root->left);
    int r =  maxDepth(root->right);
    return l > r ? l + 1:r + 1;
}

int** levelOrderBottom(struct TreeNode* root, int** columnSizes, int* returnSize) {
	if(root == NULL)
		return NULL;
    struct TreeNode* q[10000];	//声明一个队列
    int depth = maxDepth(root);//求出二叉树的高度
	int** result = (int**)malloc(sizeof(int*)*depth);
    *columnSizes = (int*)malloc(sizeof(int)*depth);
	q[0] = root;
	int cur = 0,last = 1,size = 1,level = 0;
	while(cur < size)
	{
		last = size;
		int i = 0;
        int offset = depth - level - 1;	//倒序输出 求出对应的偏移量
        *(result + offset) = (int*)malloc(sizeof(int) * 10000); //分配空间
		for(;cur < last;i++)
		{
			result[offset][i] = q[cur]->val;
			
			//左孩子入队列
			if(q[cur]->left != NULL)
				q[size++] = q[cur]->left;
			//右孩子入队列
			if(q[cur]->right != NULL)
				q[size++] = q[cur]->right;
			
			++cur;
		}
        *(*columnSizes + offset) = i;	//实际上columnSizes是个一维数组
		level++;
	}
    *returnSize = level;
	return result;
}