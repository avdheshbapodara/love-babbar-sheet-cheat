#include <bits/stdc++.h>
using namespace std;

// Today's Date -17/01/24
// Leetcode Question Name -

class Solution
{
public:
    int smallestRangeII(vector<int> &nums, int k)
    {
        int max = *max_element(nums.begin(), nums.end());
        // cout << max;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= max/2)
            {
                nums[i] = nums[i] + k;
                // cout << "Ja beii " << max << endl;
            }
            else
            //  (nums[i] > nums[nums.size() - 1] / 2)
            {
                // cout << "Kem bhai" << endl;
                nums[i] = nums[i] - k;
            }
        }
        for (auto &ele : nums)
            cout << ele << endl;
        return *max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end());
    }
};

int main()
{
    int k = 1;
    vector<int> vec = {2, 7, 2};
    Solution solution;
    cout << solution.smallestRangeII(vec, k) << endl;
    return 0;
}