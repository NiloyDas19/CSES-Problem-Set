#include<bits/stdc++.h>
using namespace std;

using ll = long long;
char s[8][8];
int col[8] , diagnol1[16] , diagnol2[16];
ll ans = 0;
void f(ll currentRow){
    if(currentRow == 8){
        ans++;
        return;
    }
    for(int currentCol = 0; currentCol < 8; currentCol++){
        if(s[currentRow][currentCol] == '*' || col[currentCol] || diagnol1[currentRow + currentCol] || diagnol2[currentRow - currentCol + 7]) continue;
        col[currentCol] = diagnol1[currentRow+currentCol] = diagnol2[currentRow - currentCol + 7] = 1;
        f(currentRow + 1);
        col[currentCol] = diagnol1[currentRow+currentCol] = diagnol2[currentRow - currentCol + 7] = 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        memset(col , 0 , sizeof col);
        memset(diagnol1 , 0 , sizeof diagnol1);
        memset(diagnol2 , 0 , sizeof diagnol2);
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cin >> s[i][j];
            }
        }
        f(0);
        cout << ans << "\n";
    }
    return 0;
}