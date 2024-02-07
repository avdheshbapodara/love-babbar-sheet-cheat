#include <bits/stdc++.h>
using namespace std;

// Today's Date - 24 Jan 24
// Leetcode Question Name -Merge Intervals

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        
    }
};

int main()
{
    vector<vector<int>> vec = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    Solution solution;
    solution.merge(vec);

    for (const auto &innerVec : vec)
    {
        for (const auto &element : innerVec)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}