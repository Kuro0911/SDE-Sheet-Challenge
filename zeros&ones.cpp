class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int zeros, ones, twos;
        zeros = ones = twos = 0;
        for (auto &x : nums)
        {
            switch (x)
            {
            case 0:
                zeros++;
                break;
            case 1:
                ones++;
                break;
            case 2:
                twos++;
                break;
            }
        }
        int i = 0;
        while (zeros > 0)
        {
            nums[i] = 0;
            zeros--;
            i++;
        }
        while (ones > 0)
        {
            nums[i] = 1;
            ones--;
            i++;
        }
        while (twos > 0)
        {
            nums[i] = 2;
            twos--;
            i++;
        }
    }
};