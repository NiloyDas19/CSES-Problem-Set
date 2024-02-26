#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        ll n, a, b; cin >> n >> a >> b;
        vector<ll> preSum(n + 1, 0);
        for(int i = 1; i <= n; i++){
            ll val; cin >> val;
            preSum[i]  = preSum[i-1] + val;
        }
        ll ans = preSum[a];
        multiset<ll> ms;
        ll last = n , first = n;
        for(int i = n - a + 1; i >= 1; i--){
            if(last - i  + 1 > b){
                ms.erase(ms.find(preSum[last]));
                last--;
            }
            ms.insert(preSum[first--]);
            ans = max(ans , (*ms.rbegin() - preSum[i-1]));
        }
        cout << ans << "\n";

    }
    return 0;
}