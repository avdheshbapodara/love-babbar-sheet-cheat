#include <bits/stdc++.h>
using namespace std;

// Today's Date - 29/04024
// Leetcode Question Name - Find the Duplicate Number

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int slow = 0, fast = 0;
        while (true)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (slow == fast)
            {
                break;
            }
        }
        int slow2 = 0;
        while (true)
        {
            slow = nums[slow];
            slow2 = nums[slow2];
            if (slow2 == slow)
            {
                break;
            }
        }
        return slow;
    }
};

int main()
{
    vector<int> vec = {3,1,3,4,2};
    Solution solution;
    cout << solution.findDuplicate(vec);
    return 0;
}