#include <bits/stdc++.h>
using namespace std;

// Today's Date - 24 Jan 24
// Leetcode Question Name - Merge Sorted Array

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = 0; i < n; i++)
            nums1.pop_back();
        
        for(auto &ele:nums2)
            nums1.push_back(ele);

        sort(nums1.begin(),nums1.end());
    }
};

int main()
{
    int m = 3;
    int n = 3;
    vector<int> vec1 = {1, 2, 3, 0, 0, 0};
    vector<int> vec2 = {2, 5, 6};

    Solution solution;
    solution.merge(vec1,m,vec2,n);

    return 0;
}