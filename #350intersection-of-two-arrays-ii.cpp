class Solution {
public:
	//时间复杂度O(nlgn)也就是排序的时间复杂度
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        if(nums1.size() == 0 || nums2.size() == 0)
            return res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        auto t1 = nums1.end(),t2 = nums2.end();
        for(auto p1 = nums1.begin(),p2 = nums2.begin();p1 < t1 && p2 < t2;)
        {
            if(*p1 == *p2)
            {
                res.push_back(*p1);
                p1++;
                p2++;
            }
            else if(*p1 < *p2)
            {
                p1++;
            }
            else
                p2++;
        }
        
        return res;
    }
};
/*
	也可以是用map，遍历第一个数组将第一个数组的元素存入map,如果元素已经存在则value值加一
	遍历第二个数组，如果元素存在，存入res中，并且value值减一，如果value等于0，则删除该项。
*/