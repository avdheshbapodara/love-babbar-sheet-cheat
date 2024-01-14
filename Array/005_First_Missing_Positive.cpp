#include <bits/stdc++.h>
using namespace std;

// Today's Date - 13/01/24
// Leetcode Question Name - First Missing Positive

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        //First making the negative numbers into the numbers out of range wrt to the vector 
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= 0)
                nums[i] = nums.size() + 1;
        }
        //Then onwards we will make the index value negative whose 
        for (int i = 0; i < nums.size(); i++)
        {
            if (abs(nums[i]) <= nums.size() && nums[abs(nums[i]) - 1] > 0)
                nums[abs(nums[i]) - 1] *= -1;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                return i + 1;
            }
        }

        return nums.size() + 1; // If all positive integers are present, return the next positive integer
    }
};

int main()
{
    vector<int> vec = {9, 52, 4, -5, -65, 6, -7, 8, 285, 1, 2, 3, 4, 5, -6};
    Solution solution;
    cout << solution.firstMissingPositive(vec) << endl;

    return 0;
}