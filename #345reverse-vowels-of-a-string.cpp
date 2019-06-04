class Solution {
public:
    bool judge(char c)
    {
        switch(c)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                return true;
            default:
                return false;
        }
    }
    string reverseVowels(string s) {
        if(s.length() == 0)
            return "";
        int head = 0,tail= s.length() - 1;
        while(head < tail)
        {
            while(!judge(s[head]) && head < tail)
                head++;
            while(!judge(s[tail]) && tail > head)
                tail--;
            if(tail > head)
            {
                char temp = s[tail];
                    s[tail] = s[head];
                    s[head] = temp;
                head++;
                tail--;
            }
        }
        return s;
    }
};