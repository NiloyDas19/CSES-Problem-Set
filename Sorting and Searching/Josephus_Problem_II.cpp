#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
using ll = long long;

#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>

// find_by_order(indx) // Give the value of particular index
// order_of_key(val)// Give the  index of the specific value


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n , k; cin >> n >> k;
    ordered_set os;
    for(int i = 1; i <= n; i++){
        os.insert(i);
    }
    ll j = 0;
    while (os.size() > 0)
    {
        ll sz = os.size();
        j += k;
        j %= sz;
        auto it = os.find_by_order(j);
        cout << *it << " ";
        os.erase(it);
    }
    cout << "\n";
    return 0;
}
