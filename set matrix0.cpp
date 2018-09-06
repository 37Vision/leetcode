class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        const size_t row = matrix.size();
        const size_t col = matrix[0].size();
        
        //首行首列单独处理
        bool r = false;
        bool c = false;
        
        for(size_t i = 0;i < col;i++)
            if(matrix[0][i] == 0)
            {
                r = true;
                break;
            }
        for(size_t i = 0;i < row;i++)
            if(matrix[i][0] == 0)
            {
                c = true;
                break;
            }
        for(size_t i = 1;i<row;i++)
            for(size_t j = 1;j<col;j++)
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
        for(size_t i = 0;i<row;i++)
			if(matrix[i][0] == 0)
				for(size_t j = 0;j<col;j++)
					matrix[i][j] = 0;
        for(size_t i = 0;i<col;i++)
			if(matrix[0][i] == 0)
				for(size_t j = 0;j<row;j++)
					matrix[j][i] = 0;		
		if(r == true)		
			for(size_t i = 0;i<col;i++)
				matrix[0][i] = 0;	
		if(c == true)		
			for(size_t i = 0;i<row;i++)
				matrix[i][0] = 0;				
    }
};

