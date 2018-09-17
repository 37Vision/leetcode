class Solution {
public:
	//时间复杂度为O(n）
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int len = nums.size();
        if(len == 0)
            return false;
        map<int,int> m;
        for(int i = 0;i<len;i++)
        {
            if(!m.count(nums[i]))
                m[nums[i]] = i;
            else
            {
                if(i - m[nums[i]] <= k)
                    return true;
                else
                    m[nums[i]] = i;
            }
        }
        return false;
    }
};