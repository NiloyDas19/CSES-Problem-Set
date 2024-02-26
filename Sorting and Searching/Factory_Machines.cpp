#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n , k; cin >> n >> k;
    vector<ll> v(n);
    for(auto &it : v) cin >> it;
    ll low = 1 , high = 1e18;
    while (low < high)
    {
        ll mid = (high - low) / 2 + low;
        ll cnt = 0;
        for(auto &it : v){
            cnt += (mid / it);
            if(cnt >= k) break;
        }
        if(cnt >= k){
            high = mid;
        }
        else low = mid + 1;
    }
    cout << high << "\n";
    return 0;
}