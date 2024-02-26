#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n ; cin >> n;
    ll ans = 0 , sum = 0;
    map<ll ,ll> m;
    m[0]++;
    for(int i = 0; i < n; i++){
        ll val; cin >> val;
        sum += val;
        int re = sum % n;
        if(re < 0) re += n;
        ans += m[re];
        m[re]++;
    }
    cout << ans << "\n";
}
