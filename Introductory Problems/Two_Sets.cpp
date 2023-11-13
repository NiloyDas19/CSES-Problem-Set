#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    ll sum = (n * (n + 1)) / 2;
    vector<ll> set1 , set2;
    ll val1 = n , val2 = n-1;
    set1.push_back(n);
    set2.push_back(n-1);
    n -= 2;
    while (n > 0)
    {
        if(val1 > val2) val2 += n , set2.push_back(n);
        else val1 += n , set1.push_back(n);
        n--;
    }
    if((sum & 1) || (val1 != val2)){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
        int len1 = set1.size() , len2 = set2.size();
        reverse(set1.begin() , set1.end());
        reverse(set2.begin() , set2.end());
        cout << len1 << "\n";
        for(int i = 0; i < len1; i++) cout << set1[i] << " \n"[i == len1-1];
        cout << len2 << "\n";
        for(int i = 0; i < len2; i++) cout << set2[i] << " \n"[i == len2-1];
    }
    return 0;
}