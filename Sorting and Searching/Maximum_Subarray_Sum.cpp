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
    vector<ll> v(n);
    for (auto &it : v)
        cin >> it;
    ll ans = v[0], sum = v[0];
    for (int i = 1; i < n; i++)
    {
        sum = max(v[i], sum + v[i]);
        ans = max(ans, sum);
    }
    cout << ans << "\n";
    return 0;
}