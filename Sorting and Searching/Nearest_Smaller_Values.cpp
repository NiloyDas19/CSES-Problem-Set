#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &it : v) cin >> it;
    vector<ll> ans(n , 0);
    stack<ll> st;
    for(int i = n-1; i >= 0; i--){
        while (!st.empty() && v[st.top()-1] > v[i])
        {
            ans[st.top()-1] = i + 1;
            st.pop();
        }
        st.push((i+1));        
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " \n"[i+1 == n];
    }
    return 0;
}