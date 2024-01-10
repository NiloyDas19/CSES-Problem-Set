#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool cmp(vector<ll> &a , vector<ll> &b){
    return a[0] < b[0];
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<vector<ll>> v(n);
    for(int i = 0; i < n; i++){
        ll x , y ; cin >> x >> y;
        v[i] = {x , y , i};
    }
    sort(v.begin() , v.end() , cmp);
    ll i = 0;
    vector<ll> ans(n , 0);
    multiset<ll> faka;
    multiset<pair<ll,ll>> reserved;
    for(auto &info : v){
        auto sz = reserved.lower_bound({info[0] , 0});
        auto it = reserved.begin();
        vector<pair<ll,ll>> temp;
        while (1)
        {
           if(it == sz) break;
           faka.insert(it->second);
           temp.push_back(*it);
           it++;
        }
        for(auto &val : temp) reserved.erase(reserved.find(val));
        
        if(faka.size() == 0){
            ++i;
            faka.insert(i);
        }
        auto take = faka.begin();
        ans[info[2]] = *take;
        pair<ll,ll> a = {info[1] , *take};
        reserved.insert(a);
        faka.erase(take);
    }
    cout << i << "\n";
    for(int j = 0; j < n; j++) cout << ans[j] << " \n"[j+1 == n];
    return 0;
}