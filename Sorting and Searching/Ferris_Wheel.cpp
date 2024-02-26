#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        ll n , x; cin >> n >> x;
        vector<ll> v(n);
        for(auto &it : v) cin >> it;
        sort(v.rbegin() , v.rend());
        ll ans = 0 , i = 0 , j = n-1 , sum = 0;
        while(i <= j){
            int cnt = 0;
            while(sum + v[i] <= x && i <= j && cnt < 2) {
                sum += v[i];
                i++;
                cnt++;
            }
            while (sum + v[j] <= x && i <= j && cnt < 2)
            {
                sum += v[j];
                j--;
                cnt++;
            }
            ans++;
            sum = 0;
        } 
        cout << ans << "\n";
    }
    return 0;
}