#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9 + 7;

ll bexpo(ll a, ll b , ll mod){
    ll re = 1;
    while(b > 0){
        if(b & 1) re = (re * a) % mod;
        b /= 2;
        a = (a * a) % mod;
    }
    return re;
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    cout << bexpo(2 , n , mod) << "\n";
    return 0;
}