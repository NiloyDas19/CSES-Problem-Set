#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n , x; cin >> n >> x;
    vector<pair<ll , ll>> nums(n);
    for(int i = 0; i < n; i++){
        ll val; cin >> val;
        nums[i] = {val , i + 1};
    }
    sort(nums.begin() , nums.end());
    bool isFind = false;
    for(int i = 0; i < n-3 && !isFind; i++){
        for(int k = i + 1; k < n-2 && !isFind; k++){
            int l = k + 1 , r = n - 1;
            while (l < r)
            {
                ll sum = nums[i].first + nums[k].first + nums[l].first + nums[r].first;
                if(sum == x){
                    isFind = true;
                    cout << nums[i].second << " " << nums[k].second << " " << nums[l].second << " " << nums[r].second << "\n";
                    break;
                }
                else if(sum > x) r--;
                else l++;
            }
        }
    }
    if(!isFind){
        cout << "IMPOSSIBLE\n";
    }
    return 0;
}