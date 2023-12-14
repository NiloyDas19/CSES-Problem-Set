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
    sort(v.begin() , v.end());
    ll ans = INT64_MAX, sum = 0;
    ll mid = n / 2 , i;
    for (i = 0; i < n; i++)
    {
        sum += abs(v[i] - v[mid]);
    }
    ans = min(ans, sum);
    if (n % 2 == 0)
    {
        mid--;
        for (i = 0; i < n; i++)
        {
            sum += abs(v[i] - v[mid]);
        }
        ans = min(ans, sum);
    }
    cout << ans << "\n";
    return 0;
}