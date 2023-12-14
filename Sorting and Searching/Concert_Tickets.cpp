#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, p , i;
    cin >> n >> p;
    multiset<ll> ms;
    for (i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        ms.insert(a);
    }
    for (i = 0; i < p; i++)
    {
        ll a;
        cin >> a;
        if (ms.size() == 0)
        {
            cout << -1 << "\n";
            continue;
        }
        auto it = ms.upper_bound(a);
        if (it != ms.begin())
            it--;
        cout << ((*it <= a) ? *it : -1) << "\n";
        if (*it <= a)
            ms.erase(it);
    }

    return 0;
}