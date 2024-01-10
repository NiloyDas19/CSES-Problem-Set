#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n , i, j, ans = 0; cin >> n;
    vector<int> playlists(n);
    for(auto &song : playlists) cin >> song;
    map<int , int> m;
    i = j = 0;
    while(j < n){
        m[playlists[j]]++;
        while(i < n && m[playlists[j]] > 1) {
            m[playlists[i]]--;
            if(m[playlists[i]]==0) m.erase(playlists[i]);
            i++;
        }
        ans = max(ans,(int)m.size());
        j++;
    }
    cout << ans << "\n";
    return 0;
}