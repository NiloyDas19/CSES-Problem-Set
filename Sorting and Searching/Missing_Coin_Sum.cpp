#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &it : v) cin >> it;
    sort(v.begin() , v.end());
    ll ans = 1 , i = 0;
    while (i < n)
    {
        if(v[i] <= ans){
            ans += v[i];
        }
        else break;
        i++;
    }
    cout << ans << "\n";
    return 0;
}