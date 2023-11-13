#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    ll ans = 0;
    ll base = 5 , val = 5;
    while (val <= n)
    {
        ans += (n / val);
        val *= base;
    }
    cout << ans << "\n";
    return 0;
}