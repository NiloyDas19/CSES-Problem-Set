#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    map<ll, ll> m;
    vector<ll> nums(n);
    for(auto &num : nums) cin >> num;
    ll ans = 0 , cnt = 0 , st = 0;
    for(int i = 0; i < n; i++){
        m[nums[i]]++;
        cnt++;
        while (m.size() > k && st < i)
        {
            m[nums[st]]--;
            if(m[nums[st]] == 0) m.erase(nums[st]);
            st++;
            cnt--;
        }
        ans += cnt;
    }
    cout << ans << "\n";
    return 0;
}

