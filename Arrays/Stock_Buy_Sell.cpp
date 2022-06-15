class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int l = 0, r = 1;
        int mx = 0;
        while (r < prices.size())
        {
            if (prices[l] < prices[r])
            {
                int temp = prices[r] - prices[l];
                mx = max(temp, mx);
            }
            else
            {
                l = r;
            }
            r++;
        }
        return mx;
    }
};