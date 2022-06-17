class Solution
{
public:
    int lengthOfLongestSubstring(string str)
    {
        set<char> s;
        int ans = 0;
        int l = 0, r = 0;
        while (r < str.length())
        {
            if (s.find(str[r]) == s.end())
            {
                s.insert(str[r]);
                r++;
                int temp = r - l;
                ans = max(ans, temp);
            }
            else
            {
                s.erase(str[l]);
                l++;
            }
        }
        return ans;
    }
};