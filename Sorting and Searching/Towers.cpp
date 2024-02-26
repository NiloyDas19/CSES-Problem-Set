#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<int> v(n);
    for(auto &it : v) cin >> it;
    ll ans = 0;
    multiset<ll> ms;
    for(auto &it : v){
        ms.insert(it);
        auto it1 = ms.upper_bound(it);
        if(it1 != ms.end()){
            ms.erase(it1);
        }
        ans = max(ans , (ll) ms.size());
    }
    cout << ans << "\n";
    return 0;
}