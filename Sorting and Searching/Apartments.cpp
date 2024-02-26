#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, m, k , i, j;
    cin >> n >> m >> k;
    vector<ll> applicant(n), apartment(m);
    for (auto &it : applicant)
        cin >> it;
    for (auto &it : apartment)
        cin >> it;
    sort(applicant.begin() , applicant.end());
    sort(apartment.begin() , apartment.end());

    ll ans = 0;
    j = 0;
    for (i = 0; i < n; i++)
    {
        while (j < m && apartment[j] < applicant[i] - k)
            j++;
        if (j < m && applicant[i] + k >= apartment[j])
        {
            ans++, j++;
        }
    }
    cout << ans << "\n";
    return 0;
}