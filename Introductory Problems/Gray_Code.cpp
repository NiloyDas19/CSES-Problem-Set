#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int total = (1 << n);
    vector<string> ans(total);
    int cnt = total;
    for(int j = 0; j < n; j++){
        cnt /= 2;
        string temp;
        for(int i = 0; i < cnt; i++) temp += "0";
        for(int i = 0; i < cnt; i++) temp += "1";
        string re;
        while (re.size() < total)
        {
            re += temp;
            reverse(temp.begin() , temp.end());
        }
        
        for(int i = 0 ; i < total; i++){
            ans[i].push_back(re[i]);
        }
    }
    for(int i = 0; i < total; i++) cout << ans[i] << "\n";
    return 0;
}




