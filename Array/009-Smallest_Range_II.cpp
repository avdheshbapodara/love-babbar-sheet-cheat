#include <bits/stdc++.h>
using namespace std;

// Today's Date -
// Leetcode Question Name -

class Solution
{
public:
    int smallestRangeII(vector<int> &nums, int k)
    {
        for (int i = 0; i < nums.size() / 2; i++)
            nums[i] = nums[i] + k;
        for (int i = nums.size() / 2; i < nums.size(); i++)
            nums[i] = nums[i] - k;

        return *max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end());
    }
};

int main()
{
    int k = 3;
    vector<int> vec = {1, 3, 6};
    Solution solution;
    cout << solution.smallestRangeII(vec, k) << endl;
    return 0;
}