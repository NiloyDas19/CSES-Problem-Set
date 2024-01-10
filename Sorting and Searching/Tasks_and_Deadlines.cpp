#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool cmp(pair<ll,ll> &a, pair<ll,ll> &b){
    if(a.first == b.first) a.second < b.second;
    return a.first < b.first;
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<pair<ll,ll>> v(n);
    for(auto &[x , y]:v) cin >> x >> y;
    sort(v.begin() , v.end() , cmp);
    ll ti = 0 , ans = 0;
    for(auto &[x , y] : v){
        ti += x;
        ans += (y-ti);
    }
    cout << ans << "\n";
    return 0;
}