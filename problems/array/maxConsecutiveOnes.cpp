// Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.

// Example 1:

// Input: prices = {1, 1, 0, 1, 1, 1}

// Output: 3

// Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.

// Input: prices = {1, 0, 1, 1, 0, 1}

// Output: 2

// Explanation: There are two consecutive 1's in the array.

#include <bits/stdc++.h>

using namespace std;

int maxOnes(int arr[], int arrSize)
{
    int maxCount = 0;
    int count = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == 1)
        {
            count += 1;
        }
        else
        {
            count = 0;
        }
        maxCount = max(count, maxCount);
    }

    return maxCount;
}

int main()
{
    int arr[] = {1, 0, 1, 1, 1, 1, 0, 1};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int res = maxOnes(arr, arrSize);

    cout << res << endl;
    return 0;
}