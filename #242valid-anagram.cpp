class Solution {
public:
    int hash[200] ={0};
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        int len = s.size();
        for(int i = 0;i<len;i++)
            hash[s[i]]++;
        for(int i = 0;i<len;i++)
        {
            hash[t[i]]--;
            if(hash[t[i]] < 0)
                return false;
        }
        return true;
    }
};