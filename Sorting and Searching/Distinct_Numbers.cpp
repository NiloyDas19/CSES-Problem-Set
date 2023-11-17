#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n , cnt = 1; cin >> n;
    vector<int> nums(n);
    for(auto &num : nums) cin >> num;
    sort(nums.begin() , nums.end());
    for(int i = 1; i < n; i++){
        if(nums[i] != nums[i-1]) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}