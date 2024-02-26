#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using ll = long long;

#define TT pair<int, int>
#define ordered_set tree<TT, null_type, less<TT>, rb_tree_tag, tree_order_statistics_node_update>

// find_by_order(indx) // Give the value of particular index
// order_of_key(val)// Give the  index of the specific value

vector<pair<int,int>> ranges;

bool cmp1(pair<int , int> &a , pair<int , int> &b){
    if(a.first == b.first){
        return ranges[a.second].first > ranges[b.second].first;
    }
    return a.first < b.first;
}

bool cmp2(pair<int , int> &a , pair<int , int> &b){
    if(a.first == b.first){
        return ranges[a.second].second > ranges[b.second].second;
    }
    return a.first < b.first;
}



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    ranges.resize(n);
    vector<pair<int,int>> leftRanges , rightRanges;
    vector<int> ans1(n , 0) , ans2(n , 0);
    ordered_set check1 , check2;
    for(int i = 0; i < n; i++){
        cin >> ranges[i].first >> ranges[i].second;
        leftRanges.push_back({ranges[i].first , i});
        rightRanges.push_back({ranges[i].second , i});
    }
    sort(rightRanges.begin() , rightRanges.end() , cmp1);
    sort(leftRanges.begin() , leftRanges.end() , cmp2);
    for(auto &[r , i] : rightRanges){
        auto it = check1.lower_bound({ranges[i].first , -1 });
        if(it != check1.end()){
            ans1[i] = check1.size() - check1.order_of_key(*it);
        }
        check1.insert({ranges[i].first , i});
    }
    for(auto &[l , i] : leftRanges){
        auto it = check2.lower_bound({ranges[i].second , -1 });
        if(it != check2.end()){
            ans2[i] = check2.size() - check2.order_of_key(*it);
        }
        check2.insert({ranges[i].second , i});
    }
    for(int i = 0; i < n; i++) cout << ans1[i] << " \n"[i+1 == n];
    for(int i = 0; i < n; i++) cout << ans2[i] << " \n"[i+1 == n];
    return 0;
}
