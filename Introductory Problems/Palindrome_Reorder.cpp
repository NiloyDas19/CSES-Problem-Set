#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    vector<int> fre(26 , 0);
    for(auto &ch : s) fre[ch - 'A']++;
    int cnt = 0;
    for(auto &it : fre) if(it & 1) cnt++;
    if(cnt > 1){
        cout << "NO SOLUTION\n";
    }
    else{
        char mid = '1';
        string ans;
        for(int i = 0; i < 26; i++){
            char ch = ('A' + i);
            int cnt = fre[i] / 2;
            while (cnt--) ans += ch;
            if(fre[i] & 1) mid = ch;
        }
        string cpy = ans;
        reverse(cpy.begin() , cpy.end());
        if(mid != '1') ans += mid;
        ans += cpy;
        cout << ans << "\n";
    }
    return 0;
}