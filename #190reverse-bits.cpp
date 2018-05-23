uint32_t reverseBits(uint32_t n) {
    unsigned int result =0;
    int count = 0;
    while(n != 0)
    {
        result = result*2 + n%2;
        n /= 2;
        count++;
    }
    for(int i = count;i<32;i++)
        result *= 2;
    return result;
}