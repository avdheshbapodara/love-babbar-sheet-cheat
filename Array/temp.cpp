#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int pointer = 0;
        int maxi;
        int i = 0;
        int n = nums.size();
        int count = 0;

        if (n == 1)
        {
            return 0;
        }

        else
        {
            while (pointer < n && i < n)
            {
                if (nums[pointer] < n - pointer - 1)
                {
                    maxi = *max_element(nums.begin() + pointer + 1, nums.begin() + nums[pointer] + pointer);
                    i++;
                    if (nums[i] == nums[i + 1] && i < pointer + nums[pointer])
                    {
                        i++;
                    }
                    if (nums[i] == maxi)
                    {
                        pointer = i;
                        count++;
                    }
                }
                else
                {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};
int main()
{
    vector<int> vec = {2, 1, 2, 5, 1, 3};
    Solution solution;
    cout << solution.jump(vec) << endl;
    return 0;
}