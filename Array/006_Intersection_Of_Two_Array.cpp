#include <bits/stdc++.h>
using namespace std;

// Today's Date - 14/01/24
// Leetcode Question Name - Intersection of Two Arrays

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        for (int i = 0; i < nums2.size(); i++)
            nums1.push_back(nums2[i]);

        unordered_map<int, int> m;
        for (auto &ele : nums1)
            m[ele]++;

        return nums1;
    }
};

int main()
{
    vector<int> vec1 = {9, 4, 9, 8, 4};
    vector<int> vec2 = {4, 9, 5};
    Solution solution;
    vector<int> vector_final = solution.intersection(vec1, vec2);
    for (int i = 0; i < vec1.size() + vec2.size(); i++)
    {
        cout << vector_final[i] << endl;
    }

    return 0;
}