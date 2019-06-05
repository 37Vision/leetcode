class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.empty())
            return;
        int last = s.size() - 1, len = s.size() - 1;
        for(int i = 0 ; i <= len/2 ; i++,last--)
        {
            char t = s[last];
            s[last] = s[i];
            s[i] = t;
        }
    }
};