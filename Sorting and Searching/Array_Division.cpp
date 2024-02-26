#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n , k; cin >> n >> k;
    vector<ll> v(n);
    ll low = 0;
    for(auto &it : v) cin >> it , low = max(low, it);
    ll high = 1e15;
    while (low < high)
    {
        ll mid = (low + high) / 2;
        ll sum = 0 , cnt = 1 , ma = 0;
        for(auto &it : v){
            if(it + sum > mid){
                sum = it;
                cnt++;
            }
            else sum += it;
        }
        if(cnt <= k){
            high = mid;
        }
        else low = mid + 1;
    }
    cout << high << "\n";
    return 0;
}