#include <bits/stdc++.h>
using namespace std;

// Today's Date - 10/01/24

class Solution
{
public:
    void sort012(int *arr, int n)
    {
        int zeroPointer = 0, twoPointer = n - 1;
        for (int currIndex = 0; currIndex <= twoPointer; currIndex++)
        {
            if (arr[currIndex] == 0)
                swap(arr[zeroPointer++], arr[currIndex]);
            else if (arr[currIndex] == 2)
                swap(arr[twoPointer--], arr[currIndex--]);
            else
                continue;
        }
    }
};

int main()
{
    // vector<int> vec = {};
    Solution solution;
    int n = 10;
    int arr[n] = {0, 0, 0, 0, 0, 1, 0, 0, 0, 1};

    solution.sort012(arr, n);

    // Print the elements of arr
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}