#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<int> v(n);
    set<int> s;
    for(int i = 1; i <= n; i++){
        v[i-1] = i;
        s.insert(i);
    }
    int i = 1;
    while (1)
    {
        if(n == 0) break;
        if(n == 1){
            cout << v[0] ;
            break;
        }
        while (i < n)
        {
            cout << v[i] << " ";
            s.erase(v[i]);
            i += 2;
        }
        i %= n;
        int j = 0;
        n = s.size();
        for(auto &it: s) v[j++] = it;
    }
    cout << "\n";
    return 0;
}

