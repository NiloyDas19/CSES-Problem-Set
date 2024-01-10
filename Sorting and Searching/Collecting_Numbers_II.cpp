#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n , m; cin >> n >> m;
    vector<int> v(n+1) , index_sort(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        index_sort[v[i]] = i;
    }
    int round = 1 , pos = index_sort[1];
    for(int i = 1; i <= n; i++){
        if(pos > index_sort[i]){
            round++;
        }
        pos = index_sort[i];
    }
    while (m--)
    {
        int pos1, pos2; cin >> pos1 >> pos2;
        int a = v[pos1];
        int b = v[pos2];
        if(a > b) swap(a , b);
        if(a+1 == b){
            if((b + 1 <= n && index_sort[b] > index_sort[b+1])) round--;
            if((b-1 >= 1 && index_sort[b-1] > index_sort[b])) round--;
            if((a-1 >= 1 && index_sort[a-1] > index_sort[a])) round--;
        }
        else{
            if((b + 1 <= n && index_sort[b] > index_sort[b+1])) round--;
            if((b-1 >= 1 && index_sort[b-1] > index_sort[b])) round--;
            if((a + 1 <= n && index_sort[a] > index_sort[a+1])) round--;
            if((a-1 >= 1 && index_sort[a-1] > index_sort[a])) round--;
        }
        swap(v[pos1] , v[pos2]);
        swap(index_sort[a] , index_sort[b]);
        if(a+1 == b){
            if((b + 1 <= n && index_sort[b] > index_sort[b+1])) round++;
            if((b-1 >= 1 && index_sort[b-1] > index_sort[b])) round++;
            if((a-1 >= 1 && index_sort[a-1] > index_sort[a])) round++;
        }
        else{
            if((b + 1 <= n && index_sort[b] > index_sort[b+1])) round++;
            if((b-1 >= 1 && index_sort[b-1] > index_sort[b])) round++;
            if((a + 1 <= n && index_sort[a] > index_sort[a+1])) round++;
            if((a-1 >= 1 && index_sort[a-1] > index_sort[a])) round++;
        }
        cout << round << "\n";
    }
    return 0;
}

