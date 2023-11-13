#include<bits/stdc++.h>
using namespace std;

using ll = long long;

vector<pair<ll,ll>> ans;
 
void towerofhanoi(ll n,ll a,ll b, ll c){
	if(n==1){
		ans.push_back({a,c});
		return;
	}
	towerofhanoi(n-1,a,c,b);
	ans.push_back({a,c});
	towerofhanoi(n-1,b,a,c);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    towerofhanoi(n , 1 , 2 , 3);
    cout << (int) ans.size() << "\n";
    for(auto &[x , y] : ans) cout << x << " " << y << "\n";
    return 0;
}