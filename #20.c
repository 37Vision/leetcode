bool isValid(char* s) {
    char stack[5000];
    int head = 0;
    int i = 1;
    stack[0] = s[0];
    if(stack[0] == '\0')
        return true;
    while(s[i] != '\0')
    {
        if(head == -1)
        {
            head++;
            stack[head] = s[i];
        }
        else if(s[i] == ')')
        {
            if(stack[head] == '(')
                head--;
            else 
            {
                head++;
                stack[head] = ')';
            }
        }
        else if(s[i] == ']')
        {
            if(stack[head] == '[')
                head--;
            else 
            {
                head++;  
                stack[head] = ']';
            }
        }
        else if(s[i] == '}')
        {
            if(stack[head] == '{')
                head--;
            else 
            {
                head++;  
                stack[head] = '}';
            }
        }  
        else 
        {
            head++;
            stack[head] = s[i];
        }
        i++;
    }
    if(head == -1)
        return true;
    else
        return false;
}
