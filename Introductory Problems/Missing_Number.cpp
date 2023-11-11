#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll n; cin >> n;
	ll sum = (n * (n + 1)) / 2;
	for(int i = 0; i < n-1; i++){
		ll num; cin >> num;
		sum -= num;
	}
	cout << sum << "\n";
	return 0;
}