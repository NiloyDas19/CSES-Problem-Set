#include<bits/stdc++.h>
using namespace std;

using ll = long long;
string s;
ll ans = 0;
bool vis[8][8];

bool checkBound(int i , int j){
    return (i >= 1 && i <= 7 && j >= 1 && j <= 7);
}
void f(int i , int j , int cnt ){
    if((i == 7 && j == 1) || cnt == 48){
        if((i == 7 && j == 1) && cnt == 48)  ++ans;
        return ;
    }

    if((!checkBound(i+1 , j) || vis[i+1][j]) && (!checkBound(i-1, j) || vis[i-1][j])){
        if(checkBound(i , j+1) && !vis[i][j+1] && checkBound(i , j-1) && !vis[i][j-1]) return;
    }
    if((!checkBound(i , j+1) || vis[i][j+1]) && (!checkBound(i, j-1) || vis[i][j-1])){
        if(checkBound(i+1 , j) && !vis[i+1][j] && checkBound(i-1 , j) && !vis[i-1][j]) return;
    }

    vis[i][j] = true;
    if(s[cnt] == 'D' || s[cnt] == '?'){
        if(checkBound(i+1 , j) && !vis[i+1][j]) f(i+1 , j , cnt+1 );
    }
    if(s[cnt] == 'U' || s[cnt] == '?'){
        if(checkBound(i-1 , j) && !vis[i-1][j]) f(i-1 , j, cnt+1 );
    }
    if(s[cnt] == 'L' || s[cnt] == '?'){
        if(checkBound(i , j-1) && !vis[i][j-1]) f(i , j-1, cnt+1 );
    }
    if(s[cnt] == 'R' || s[cnt] == '?'){
        if(checkBound(i , j+1) && !vis[i][j+1]) f(i , j+1, cnt+1 );
    }
    vis[i][j] = false;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        cin >> s;
        f(1 , 1 , 0);
        cout << ans << "\n";
    }
    return 0;
}