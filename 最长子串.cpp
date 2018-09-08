#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		int hash[256] = {0};
		int res = 0,left = 0;
		int len = s.size();
		for(int i = 0;i<len;i++)
		{
			if(hash[s[i]] == 0 || hash[s[i]]<left)
			{
				res = max(res,i - left + 1);
			}
			else
				left = hash[s[i]];
			hash[s[i]] = i + 1;	
		}
		return res;
    }
};

