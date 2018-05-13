/**
 * Return an array of arrays.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int** columnSizes) {
    int **tri =(int**)malloc(sizeof(int*)*numRows);
    *columnSizes = (int*)malloc(sizeof(int)*numRows);
    
    for(int i = 0;i<numRows;i++)
    {
        int j = 0;
        tri[i] = (int*)malloc(sizeof(int)*(i+1));
        for(;j<=i;j++)
        {
			//每行首位赋值成1
            if(j == i || j == 0)
                tri[i][j] = 1;
			//利用杨辉三角递推
            else
                tri[i][j] = tri[i-1][j-1] + tri[i-1][j];    
        }
        *(*columnSizes+i) = j; 
    }
    return tri;
}
                                  