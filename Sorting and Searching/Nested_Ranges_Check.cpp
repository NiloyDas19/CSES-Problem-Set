#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
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
    multiset<ll> check1 , check2;
    for(int i = 0; i < n; i++){
        cin >> ranges[i].first >> ranges[i].second;
        leftRanges.push_back({ranges[i].first , i});
        rightRanges.push_back({ranges[i].second , i});
    }
    sort(rightRanges.begin() , rightRanges.end() , cmp1);
    sort(leftRanges.begin() , leftRanges.end() , cmp2);
    for(auto &[r , i] : rightRanges){
        auto it = check1.lower_bound(ranges[i].first);
        if(it != check1.end()){
            ans1[i] = 1;
        }
        check1.insert(ranges[i].first);
    }
    for(auto &[l , i] : leftRanges){
        auto it = check2.lower_bound(ranges[i].second);
        if(it != check2.end()){
            ans2[i] = 1;
        }
        check2.insert(ranges[i].second);
    }
    for(int i = 0; i < n; i++) cout << ans1[i] << " \n"[i+1 == n];
    for(int i = 0; i < n; i++) cout << ans2[i] << " \n"[i+1 == n];
    return 0;
}