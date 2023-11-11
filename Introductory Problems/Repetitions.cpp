#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string s; cin >> s;
	int ans = 0 , cnt = 0;
	char pre = s[0];
	for(auto &ch : s){
		(pre != ch) ? cnt = 1 : cnt += 1;
		pre = ch;
		ans = max(ans , cnt);
	}
	cout << ans << "\n";
	return 0;
}