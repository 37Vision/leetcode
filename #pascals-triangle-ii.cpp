/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {

    *returnSize = rowIndex+1;
    int **tri =(int**)malloc(sizeof(int*) * (rowIndex+1)); //声明一个二维数组
    
    for(int i = 0;i<=rowIndex;i++)
    {
        int j = 0;
        tri[i] = (int*)malloc(sizeof(int)*(i+1));
        for(;j<=i;j++)
        {
            if(j == i || j == 0)
                tri[i][j] = 1;
            else
                tri[i][j] = tri[i-1][j-1] + tri[i-1][j];    
        }
    }
    return tri[rowIndex];
}
