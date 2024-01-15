#include <bits/stdc++.h>
using namespace std;

// Today's Date - 14/01/24
// Leetcode Question Name - Intersection of Two Arrays

// class Solution
// {
// public:
//     vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
//     {
//         vector<int> temp;
//         unordered_set<int> s1;
//         unordered_set<int> s2;
//         unordered_set<int> s3;
//         for (auto &ele1 : nums1)
//             s1.insert(ele1);
//         for (auto &ele2 : nums2)
//             s2.insert(ele2);

//         for (int i = 0; i < nums1.size(); i++)
//         {
//             // cout << nums1[i] << " Jai Shree Sita" << endl;
//             if (s2.find(nums1[i]) != s2.end())
//                 s3.insert(nums1[i]);
//         }
//         for (auto it = s3.begin(); it != s3.end(); ++it)
//             temp.push_back(*it);
//         return temp;
//     }
// };
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> check(1001, 0);

        for (int i = 0; i < nums1.size(); ++i)
            check[nums1[i]] = 1;

        for (int i = 0; i < nums2.size(); ++i)
        {
            if (check[nums2[i]] == 1)
                check[nums2[i]] = 2;
        }

        nums1.clear();

        for (int i = 0; i < check.size(); i++)
            if (check[i] == 2)
                nums1.push_back(i);
        return nums1;
    }
};

int main()
{
    vector<int> vec1 = {4, 7, 9, 7, 6, 7};
    vector<int> vec2 = {5, 0, 0, 6, 1, 6, 2, 2, 4};
    Solution solution;
    vector<int> vector_final = solution.intersection(vec1, vec2);
    for (int i = 0; i < vector_final.size(); i++)
    {
        cout << vector_final[i] << endl;
    }
    return 0;
}