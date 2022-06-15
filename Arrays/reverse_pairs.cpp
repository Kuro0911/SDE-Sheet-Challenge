class Solution
{
public:
    int merge(vector<int> &arr, int low, int mid, int high)
    {
        int tot = 0;
        int j = mid + 1;
        for (int i = low; i <= mid; i++)
        {
            while (j <= high && arr[i] > 2LL * arr[j])
            {
                j++;
            }
            tot += (j - (mid + 1));
        }
        vector<int> t;
        int l = low, r = mid + 1;
        while (l <= mid && r <= high)
        {
            if (arr[l] <= arr[r])
            {
                t.push_back(arr[l]);
                l++;
            }
            else
            {
                t.push_back(arr[r]);
                r++;
            }
        }
        while (l <= mid)
        {
            t.push_back(arr[l]);
            l++;
        }
        while (r <= high)
        {
            t.push_back(arr[r]);
            r++;
        }
        for (int i = low; i <= high; i++)
        {
            arr[i] = t[i - low];
        }
        return tot;
    }
    int mergeSort(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return 0;
        int mid = (low + high) / 2;
        int ans = mergeSort(arr, low, mid);
        ans += mergeSort(arr, mid + 1, high);
        ans += merge(arr, low, mid, high);
        return ans;
    }
    int reversePairs(vector<int> &nums)
    {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};