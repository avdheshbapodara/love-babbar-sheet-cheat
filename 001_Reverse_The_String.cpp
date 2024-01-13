#include <bits/stdc++.h>
using namespace std;

// Today's Date -
// Leetcode Question Name -

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int a = 0;
        int b = s.size()-1;
        while (a <= b)
        {
            char f;
            f = s[a];
            s[a++] = s[b];
            s[b--] = f;
        }
    }
};
int main()
{
    vector<char> vec = {'h', 'e', 'l', 'l', 'o'};
    Solution solution;
    solution.reverseString(vec);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i];
    }

    return 0;
}