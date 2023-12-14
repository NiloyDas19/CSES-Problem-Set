#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (auto &it : v)  cin >> it.first >> it.second;
    sort(v.begin(), v.end());
    ll ans = 0;
    ll val = v[0].second;
    for (int i = 1; i < n; i++)
    {
        if (val <= v[i].first)
        {
            ans++;
            val = v[i].second;
        }
        else
        {
            val = min(val, v[i].second);
        }
    }
    cout << ans + 1 << "\n";
    return 0;
}