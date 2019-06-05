class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        map<int,int> m;
        for(auto i:nums1)
        {
            auto p = m.insert(pair<int,int>(i,1));
        }
        for(auto i:nums2)
        {
            auto p = m.insert(pair<int,int>(i,3));
            if(!p.second && p.first->second == 1)
                ++p.first->second;    
        }        
        for(auto i = m.begin();i!=m.end();i++)
            if(i->second == 2)
                res.push_back(i->first);
        return res;
    }
};