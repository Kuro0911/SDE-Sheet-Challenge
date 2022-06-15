class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> mp;
        pair<int, int> ans;
        ans.first = -1;
        ans.second = -1;
        for (auto &x : nums)
        {
            mp[x]++;
            if (mp[x] >= nums.size() / 2)
            {
                if (ans.second < mp[x])
                {
                    ans.first = x;
                    ans.second = mp[x];
                }
            }
        }
        return ans.first;
    }
};