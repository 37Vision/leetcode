class Solution {
public:
    bool canWinNim(int n) {
        // if(n < 4)
        //     return true;
        // int *state = (int*)malloc(sizeof(int)*(n+1));
        // for(int i = 1;i<n;i++)
        //     state[i] = 0;
        // for(int i = 1;i<=3;i++)
        //     state[i] = 1;
        // for(int i = 4;i<=n;i++)
        //     for(int j = 1;j<=3;j++)
        //         if(state[i-j] == 0)
        //         {
        //             state[i] = 1;
        //             break;
        //         }
        // return state[n] ? true : false;
        if(n%4)
            return true;
        else
            return false;
    }
};