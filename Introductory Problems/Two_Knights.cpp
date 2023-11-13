#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    for(ll i = 1 ; i <= n; i++){
        ll totoalPossible = (i * i * (i * i - 1)) / 2;
        ll attackPossible = 4 * (i - 1) * (i - 2);
        cout << totoalPossible - attackPossible << "\n";
    }
    return 0;
}