	class Solution {
	public:
	    vector<vector<int>> threeSum(vector<int>& nums) {
            vector<vector<int>> result;
	        vector<int> temp;
            if(nums.empty())	//如果为空则直接返回
                return result;
	        sort(nums.begin(),nums.end());	//先排序然后夹逼
	        auto p = nums.begin();
	        while(*p <= 0 && p != nums.end())
	        {
	            auto start = p + 1;
	            auto last = nums.end() - 1;
	            while(start < last)
	            {
	                if(*start + *last == -*p)
	                {
	                    temp.push_back(*p);
	                    temp.push_back(*start);
	                    temp.push_back(*last);
	                    result.push_back(temp);
	                    temp.clear();
                        start++;
                        last--;
                       while(*start == *(start - 1) && *last == *(last+1) && start <last)	//去掉重复的答案
	                    start++;
	                }
	                else if(*start + *last > -*p)
	                    last--;
	                else
	                    start++;
	            }
	            while(*p == *(p+1)) 	//去掉重复的答案
	            	p++;
	            p++;
	        }
	        return result;
	    }
	};