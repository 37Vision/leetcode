class Solution {
public:
	//时间复杂度O（nlogn）
    bool wordPattern(string pattern, string str) {
        map<char,string> ptos;
        map<string,char> stop;
        int pblank = 0;
        int p = 0,s = 0;
		//遍历整个字符串
        for(;p < pattern.size() && s < str.size();p++,s++)
        {
            pblank = s;
            while(str[s] != ' ' && s < str.size())
                s++;
            string temp = str.substr(pblank,s - pblank);
			//map的插入基于红黑树操作时间复杂O（logn)
            auto retp = ptos.insert(pair<char,string>(pattern[p],temp));
            if(!retp.second)
            {
                if(retp.first->second != temp)
                    return false;
            }
            auto rets = stop.insert(pair<string,char>(temp,pattern[p]));
            if(!rets.second)
            {
                if(rets.first->second != pattern[p])
                    return false;
            }
        }
        if(p == pattern.size() && s == str.size() + 1)
            return true;
        else
            return false;
    }
};