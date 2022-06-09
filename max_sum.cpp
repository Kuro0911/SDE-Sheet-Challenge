#include <bits/stdc++.h>
using namespace std;

#define int long long
#define tb ' '
#define all(a) (a).begin(), (a).end()
#define sz(x) ((int)x.size())
#define MOD (int)(1e9 + 7)
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;
typedef pair<int, pii> pip;
typedef pair<pii, pii> ppp;

int maxSum(vector<int> &vec, vector<int> &subarr)
{
    int Gsum = INT_MIN;
    for (int i = 0; i < vec.size(); i++)
    {
        int crr_sum = 0;
        for (int j = i; j < vec.size(); j++)
        {
            crr_sum += vec[j];
            if (crr_sum > Gsum)
            {
                subarr.clear();
                Gsum = crr_sum;
                subarr.push_back(i);
                subarr.push_back(j);
            }
        }
    }
    return Gsum;
}
void solve()
{
    vector<int> arr{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> subarray;
    int ans = maxSum(arr, subarray);
    cout << ans << endl;
    for (int i = subarray[0]; i <= subarray[1]; i++)
    {
        cout << arr[i] << " ";
    }
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
#ifndef ONLINE_JUDGE
    cerr << "Time :" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
#endif
    return 0;
}