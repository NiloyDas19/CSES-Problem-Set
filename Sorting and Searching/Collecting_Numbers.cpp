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
    vector<ll> v(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v[a] = i;
    }
    ll round = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        if (v[i + 1] > v[i])
            continue;
        round++;
    }
    cout << round + 1 << "\n";
    return 0;
}