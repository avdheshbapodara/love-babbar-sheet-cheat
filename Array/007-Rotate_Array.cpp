#include <bits/stdc++.h>
using namespace std;

// Today's Date - 15 Jan 24
// Leetcode Question Name -Rotate Array

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int ja = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin() + ja, nums.end());
        reverse(nums.begin(), nums.begin() + ja);
    }
};

int main()
{
    int k = 300;
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    Solution solution;
    solution.rotate(vec, k);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}