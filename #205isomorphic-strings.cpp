bool isIsomorphic(char* s, char* t) {
    int hash[256][2] = {0};			//HASH表
    int i = 0;
    while(*(s+i) != NULL)
    {
        if(hash[*(s+i)][0] == hash[*(t+i)][1] )
        {
            hash[*(s+i)][0] = i+1;
            hash[*(t+i)][1] = i+1;
        }
        else
            return false;
        i++;
    }
    return true;
}