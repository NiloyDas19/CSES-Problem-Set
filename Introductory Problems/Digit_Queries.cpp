#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    vector<pair<ll,ll>> v(19);
    ll base = 1 , sum = 0;
    for(int i = 1; i <= 18; i++){
        v[i] = {sum , base};
        ll pre = base;
        base *= 10;
        sum += (base - pre) * i;
    }
    int t = 1;
    cin >> t;
    while(t--){
        ll k; cin >> k;
        ll low = 1 , high = 1e17 + 5;
        while(low < high){
            ll mid = (low + (high - low) / 2);
            string s = to_string(mid);
            ll len = s.size();
            ll val = (mid - v[len].second + 1) * len + v[len].first;
            if(val >= k){
                high = mid;
            }
            else low = mid + 1;
        }
        string s = to_string(high);
        ll len = s.size();
        ll upper = (high - v[len].second + 1) * len + v[len].first;
        ll lower = upper - len + 1;
        for(int i = 0; i < s.size(); i++){
            if(k == lower++) {
                cout << s[i] << "\n";
                break;
            }
        }
    }
    return 0;
}
