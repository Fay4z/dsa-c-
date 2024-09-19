//  Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

// Example 1:
// Input Format: N = 3, k = 5, array[] = {2,3,5}
// Result: 2
// Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.

// Example 2:
// Input Format: N = 5, k = 10, array[] = {2,3,5,1,9}
// Result: 3
// Explanation: The longest subarray with sum 10 is {2, 3, 5}. And its length is 3.

#include <bits/stdc++.h>

using namespace std;

// Brute Force Approach
// int largestSubarrayPositive(int arr[], int arrSize, int k)
// {
//     int len = 0;
//     for (int i = 0; i < arrSize; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < arrSize; j++)
//         {
//             sum += arr[j];

//             if (sum == k)
//             {
//                 len = max(len, j - i + 1);
//             }
//         }
//     }
//     return len;
// }

// Optimal Approach

int largestSubarrayPositive(int arr[], int arrSize, int k)
{
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxlen = 0;

    while (right < arrSize)
    {

        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxlen = max(maxlen, right - left + 1);
        }
        right++;
        if (right < arrSize)
        {
            sum += arr[right];
        }
    }

    return maxlen;
}

int main()
{
    int arr[] = {2, 3, 0, 5, 1, 0, 0, 0, 9};
    int k = 9;

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int res = largestSubarrayPositive(arr, arrSize, k);

    cout << res;

    return 0;
}