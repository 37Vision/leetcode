int maxProfit(int* prices, int pricesSize) {
    int profit = 0,start = 0;//start表示当前的起点
    for(int i = 1;i<pricesSize;i++)
    {
		//如果当前值比上一个值小，则以上一个值的价格卖出
        if(prices[i-1] > prices[i] )
        {
            profit += (prices[i-1] - prices[start]);
            start = i;
        }
        if(i == pricesSize-1)
            profit += (prices[i] - prices[start]);
    }
    return profit;
}