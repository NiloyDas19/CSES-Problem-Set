#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        int a , b; cin >> a >> b;
        if(a > b) swap(a , b);
        if(a * 2  < b || (a + b) % 3) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}