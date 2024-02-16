#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool cmp(pair<ll, ll> &a , pair<ll ,ll> &b){
    return a.second < b.second;
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        multiset<ll> ms;
        vector<pair<ll,ll>> v(n);
        for(auto &[x , y] : v){
            cin >> x >> y;
        }
        sort(v.begin(), v.end(), cmp);
        ll notTake = 0;
        for(int i = 0; i < n; i++){
            if(ms.size() == 0){
                ms.insert(-v[i].second);
            }
            else{
                auto it = ms.lower_bound(-v[i].first);
                if(it != ms.end()){
                    ms.erase(it);
                    ms.insert(-v[i].second);
                }
                else if(it == ms.end() && ms.size() < k){
                    ms.insert(-v[i].second);
                }
                else notTake++;
            }
        }
        cout << n - notTake << "\n";
    }
    return 0;
}