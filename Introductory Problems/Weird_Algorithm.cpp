#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll n; cin >> n;
	while(1){
		cout << n << " ";
		if(n == 1) break;
		if(n & 1) n = 3 * n + 1;
		else n /= 2;
	}
	return 0;
}