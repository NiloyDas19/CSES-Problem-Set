#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using ll = long long;
using namespace __gnu_pbds;
#define TT pair<ll, ll>
#define ordered_set tree<TT, null_type, less<TT>, rb_tree_tag, tree_order_statistics_node_update>

// find_by_order(indx) // Give the value of particular index
// order_of_key(val)// Give the  index of the specific value

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n, k; cin >> n >> k;
    vector<ll> nums(n);
    for(auto &num : nums) cin >> num;
    ordered_set os;
    for(int i = 0; i < k; i++){
        os.insert({nums[i] , i});
    }
    int tarIndex = k / 2;
    if(k % 2 == 0) tarIndex--;
    cout << os.find_by_order(tarIndex)->first << " ";
    int st = 0;
    for(int i = k; i < n; i++){
        os.erase({nums[st] , st});
        os.insert({nums[i] , i});
        cout << os.find_by_order(tarIndex)->first << " ";
        st++;
    }
    cout << "\n";
    return 0;
}