#include <bits/stdc++.h>
using namespace std;

// Today's Date - 20/1/24
// Leetcode Question Name -Jump Game II

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int count{};
        int pointer{};
        int i = 0;
        while (i < nums.size() - 1)
        {
            cout << " Round " << i << endl;
            pointer = nums[i] +1;
            cout<<" pointer "<<pointer<<endl;
            int max = *max_element(nums.begin() + i + 1, nums.begin() + pointer);
            i = max+1;
            count++;
            if (i >= nums.size())
            {
                return count;
            }
        }
    }
};

int main()
{
    vector<int> vec = {2, 3, 1, 1, 4};
    Solution solution;
    cout << solution.jump(vec) << endl;
    return 0;
}