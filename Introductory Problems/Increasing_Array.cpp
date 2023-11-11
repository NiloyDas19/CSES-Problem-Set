#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll n; cin >> n;
	ll a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	ll ans = 0;
	for(int i = 1; i < n; i++){
		if(a[i] < a[i-1]){
			ans += (a[i-1] - a[i]);
			a[i] = a[i-1];
		}
	}
	cout << ans << "\n";
	return 0;
}