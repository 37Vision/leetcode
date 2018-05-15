int maxProfit(int* prices, int pricesSize) {
    int profit = 0,min = INT_MAX;
    for(int i = 0;i<pricesSize;i++)
    {
        
        if(prices[i] < min)
            min = prices[i];
        profit = max(profit,prices[i] - min); //最大利润等于当前值减之前最小值
    }
    return profit;
}

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}