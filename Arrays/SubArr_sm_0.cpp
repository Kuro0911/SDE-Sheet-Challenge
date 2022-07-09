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

void solve()
{
    vector<int> a{9, -3, 3, -1, 6, -5};
    map<int, int> mp;
    int mx = INT_MIN;
    int sm = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sm += a[i];
        if (sm == 0)
        {
            mx = i + 1;
        }
        else
        {
            if (mp.find(sm) != mp.end())
            {
                mx = max(mx, i - mp[sm]);
            }
            else
            {
                mp[sm] = i;
            }
        }
    }
    cout << mx << endl;
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