#include <bits/stdc++.h>
using namespace std;

// Today's Date - 23/01/24
// Leetcode Question Name - Find the Duplicate Number

class Solution//Brute Force ,Time limit Exceed
{
    public:
    int findDuplicate(vector<int>& nums) 
    {
        int cmp;
        for (int i = 0; i < nums.size(); i++)
        {
            int cnt = count(nums.begin(), nums.end(), nums[i]);
            if (cnt > 1)
            {
                cmp=nums[i];
                break;
            }
        }
        return cmp;
    }
};

int main()
{
    vector<int> vec = {3, 1, 3, 4, 2};
    Solution solution;
    cout << solution.findDuplicate(vec) << endl;

    return 0;
}