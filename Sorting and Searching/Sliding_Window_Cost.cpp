#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        multiset<ll> left, right;
        ll left_sum = 0, right_sum = 0;
        vector<ll> nums(n);
        for (auto &num : nums)
            cin >> num;
        vector<ll> temp;
        for (int i = 0; i < k; i++)
        {
            temp.push_back(nums[i]);
        }
        sort(temp.begin(), temp.end());
        int tar = (k + 1) / 2 - 1;
        for (int i = 0; i <= tar; i++)
        {
            left.insert(temp[i]);
            left_sum += temp[i];
        }
        for (int j = tar + 1; j < k; j++)
        {
            right.insert(temp[j]);
            right_sum += temp[j];
        }
        ll cost = (left.size()) * (*left.rbegin()) - left_sum;
        if (right.size() > 0)
        {
            cost += (right_sum - (right.size() * (*left.rbegin())));
        }
        cout << cost;
        for (int i = 0; i < n - k; i++)
        {
            if (left.find(nums[i]) != left.end())
            {
                left.erase(left.find(nums[i]));
                left_sum -= nums[i];
            }
            else if (right.find(nums[i]) != right.end())
            {
                right.erase(right.find(nums[i]));
                right_sum -= nums[i];
            }
            if (left.size() > 0 && *left.rbegin() >= nums[i + k])
            {
                left_sum += nums[i + k];
                left.insert(nums[i + k]);
            }
            else
            {
                right_sum += nums[i + k];
                right.insert(nums[i + k]);
            }
            while (left.size() < tar + 1)
            {
                auto it = right.begin();
                right_sum -= (*it);
                left_sum += (*it);
                left.insert(*it);
                right.erase(it);
            }
            while (left.size() > tar + 1)
            {
                auto it = --left.end();
                right_sum += (*it);
                left_sum -= (*it);
                right.insert(*it);
                left.erase(it);
            }
            ll cost = (left.size()) * (*left.rbegin()) - left_sum;
            if (right.size() > 0)
            {
                cost += (right_sum - (right.size() * (*left.rbegin())));
            }
            cout << " " << cost;
        }
        cout << "\n";
    }
    return 0;
}