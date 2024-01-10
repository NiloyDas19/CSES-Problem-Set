#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll x , n; cin >> x >> n;
    multiset<ll> ans;
    set<ll> s;
    map<ll,ll> point;
    point[x] = 0;
    s.insert(x);
    ans.insert(x);
    for(int i = 1; i <= n; i++){
        ll p; cin >> p;
        auto it = s.upper_bound((p-1));
        ll left = point[*it];
        ll right = *it;
        auto val = ans.find((right - left));
        ans.erase(val);
        point[right] = p;
        point[p] = left;
        ans.insert((right-p));
        ans.insert((p-left));
        s.insert(p);
        cout << *(ans.rbegin()) << " \n"[i == n];
    }
    return 0;
}
