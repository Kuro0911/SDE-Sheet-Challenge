class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int ans = 1, mx = 0;
        sort(nums.begin(), nums.end());
        if (nums.size() == 1)
        {
            return 1;
        }
        if (nums.size() == 0)
        {
            return 0;
        }
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                mx = max(mx, ans);
                continue;
            }
            if (nums[i] + 1 == nums[i + 1])
            {
                ans++;
            }
            else
            {
                ans = 1;
            }
            mx = max(mx, ans);
        }
        return mx;
    }
};