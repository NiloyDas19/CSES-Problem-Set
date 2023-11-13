#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    sort(s.begin() , s.end());
    vector<string> ans;
    do
    {
        ans.push_back(s);
    } while (next_permutation(s.begin() , s.end()));
    sort(ans.begin() , ans.end());
    cout << ans.size() << "\n";
    for(auto &it : ans) cout << it << "\n";
    return 0;
}