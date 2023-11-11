#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		ll row , col; cin >> row >> col;
		ll val = max(row , col);
		ll maxVal = val * val;
		ll totalNumber = val * 2 - 1;
		ll minVal = maxVal - totalNumber + 1;
		if(row  == col){
			cout << minVal + row - 1 << "\n";
		}
		else if(row == val){
			if(row & 1){
				cout << minVal + col - 1 << "\n";
			}
			else{
				cout << maxVal - col + 1 << "\n";
			}
		}
		else{
			if(col % 2 == 0){
				cout << minVal + row - 1 << "\n";
			}
			else{
				cout << maxVal - row + 1 << "\n";
			}
		}
	}
	return 0;
}