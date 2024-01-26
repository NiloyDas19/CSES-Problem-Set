#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define F first
#define S second

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, x, i, j, k;
    cin >> n >> x;
    vector<pair<ll, ll>> nums(n);
    bool paici = false;
    for (i = 0; i < n; i++)
    {
        cin >> nums[i].F;
        nums[i].S = i + 1;
    }
    sort(nums.begin(), nums.end());
    for (i = 0; i < n; i++)
    {
        ll remain = x - nums[i].F;
        j = i+1 , k = n - 1;
        while (j < k)
        {
            if (nums[j].F + nums[k].F == remain)
            {
                paici = true;
                cout << nums[i].S << " " << nums[j].S << " " << nums[k].S << "\n";
                break;
            }
            if (nums[j].F + nums[k].F > remain)
                k--;
            else
                j++;
        }
        if (paici)
        {
            break;
        }
    }
    if (!paici)
    {
        cout << "IMPOSSIBLE"
             << "\n";
    }

    return 0;
}