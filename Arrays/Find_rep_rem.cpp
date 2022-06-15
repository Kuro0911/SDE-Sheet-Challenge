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
    vector<int> a{3, 1, 2, 5, 3};
    int rep, rem, sz = a.size();
    int ans[sz];
    memset(ans, 0, sizeof(ans));
    for (auto &x : a)
    {
        ans[x]++;
    }
    rem = sz;
    for (int i = 1; i <= sz; i++)
    {
        if (ans[i] == 2)
        {
            rep = i;
        }
        if (ans[i] == 0)
        {
            rem = i;
        }
    }

    cout << "{ " << rep << " , " << rem << " }\n";
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