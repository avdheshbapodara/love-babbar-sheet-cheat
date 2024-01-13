#include <bits/stdc++.h>
using namespace std;

// Today's Date - 11/1/24
// Leetcode Question Name - Removing Minimum and Maximum From Array

class Solution
{
public:
    int minimumDeletions(vector<int> &nums)
    {
        int minVal = nums[0], maxVal = nums[0];
        int minIndex = 0, maxIndex = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= minVal)
            {
                minVal = nums[i];
                minIndex = i;
            }
            else if (nums[i] >= maxVal)
            {
                maxVal = nums[i];
                maxIndex = i;
            }
            else
                continue;
        }
        int z = nums.size();
        int x = min(minIndex, maxIndex);
        int y = max(minIndex, maxIndex);
        cout << min({z - (y - x - 1), y + 1, z - x});
    }
};

int main()
{
    vector<int> vec = {102};
    Solution solution;
    solution.minimumDeletions(vec);

    return 0;
}