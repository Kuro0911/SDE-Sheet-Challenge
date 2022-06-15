class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> res;
        int sz = nums.size();
        if (sz < 4)
            return res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < sz; i++)
        {
            int targetC = target - nums[i];
            for (int j = i + 1; j < sz; j++)
            {
                int targetB = targetC - nums[j];
                int f = j + 1, b = sz - 1;
                while (f < b)
                {
                    int targetA = nums[f] + nums[b];
                    if (targetA < targetB)
                        f++;
                    else if (targetA > targetB)
                        b--;
                    else
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[f]);
                        temp.push_back(nums[b]);
                        res.push_back(temp);

                        while (f < b && nums[f] == temp[2])
                            ++f;
                        while (f < b && nums[b] == temp[3])
                            --b;
                    }
                }
                while (j + 1 < sz && nums[j + 1] == nums[j])
                    ++j;
            }
            while (i + 1 < sz && nums[i + 1] == nums[i])
                ++i;
        }
        return res;
    }
};