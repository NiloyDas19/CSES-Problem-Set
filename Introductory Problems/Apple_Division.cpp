#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<ll> v;
ll ans = INT32_MAX , sum = 0 , n;

void f(int i , ll cnt){
    if(i >= n){
        return;
    }
    if(sum != cnt){
        ans = min(ans , abs(sum - 2 * cnt));
    }
    f(i + 1 , cnt);
    f(i + 1 , cnt + v[i]);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    v.resize(n);
    for(auto &it : v) cin >> it , sum += it;
    f(0 , 0);
    cout << ans << "\n";
    return 0;
}