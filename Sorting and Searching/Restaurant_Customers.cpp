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
    set<ll> s;
    for (auto &it : v)
    {
        cin >> it.first >> it.second;
        s.insert(it.first);
        s.insert(it.second);
    }
    map<ll, ll> pos;
    int i = 0;
    for (auto &it : s)
    {
        pos[it] = ++i;
    }
    vector<ll>prefix(2 * n + 5, 0);
    for (auto &it : v)
    {
        prefix[pos[it.first]] += 1;
        prefix[pos[it.second] + 1] -= 1;
    }
    ll ans = 0;
    for (i = 1; i < 2 * n + 5; i++)
    {
        prefix[i] += prefix[i - 1];
        ans = max(prefix[i], ans);
    }
    cout << ans << "\n";
    return 0;
}