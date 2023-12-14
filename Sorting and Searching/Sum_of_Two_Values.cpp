#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, tar;
    cin >> n >> tar;
    vector<pair<ll, ll>> v;
    vector<ll> temp;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back({a, i});
        temp.push_back(a);
    }
    sort(v.begin(), v.end());
    sort(temp.begin(), temp.end());

    bool ch = true;
    for (int i = 0; i < n; i++)
    {
        ll index = lower_bound(temp.begin() + i + 1, temp.end(), (tar - temp[i])) - temp.begin();
        if (index < n && temp[index] == (tar - temp[i]))
        {
            ch = false;
            cout << v[i].second + 1 << " " << v[index].second + 1 << "\n";
            break;
        }
    }

    if (ch)
        cout << "IMPOSSIBLE"
             << "\n";
    return 0;
}