#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<ll> v(n);
    ll sum = 0 , ma  = 0;
    for(auto &it : v) {
        cin >> it;
        sum += it;
        ma = max(it , ma);
    }
    if(sum - ma >= ma){
        cout << sum << "\n";
    }
    else{
        cout << ma * 2 << "\n";
    }
    return 0;
}

