#include <bits/stdc++.h>
using namespace std;

// Today's Date - Maximum Subarray
// Leetcode Question Name - 15 Jan 24

// class Solution
// {
// public:
//     int maxSubArray(vector<int> &nums)
//     {
//         int j{}, k{};
//         int sum{};
//         int max{};
//         if(nums.size()==1)
//             return nums[0];
//         for (int i = 0; i < nums.size(); i++)
//         {
//             sum = nums[i] + sum;
//             if (sum < 0)
//             {
//                 sum = 0;
//                 j = i + 1;
//             }
//             else
//             {
//                 if (sum > max)
//                 {
//                     max = sum;
//                     k = i;
//                 }
//                 else
//                     continue;
//             }
//         }
//         return max;
//     }
// };

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int curr_sum = 0;
        int max_sum = INT_MIN;
        for (auto &ele : nums)
        {
            curr_sum = max(ele, curr_sum + ele);
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
    }
};

int main()
{
    vector<int> vec = {-1, -2};
    Solution solution;
    cout << solution.maxSubArray(vec) << endl;
    return 0;
}