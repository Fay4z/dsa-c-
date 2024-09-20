// Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N.
// Find the number(between 1 to N), that is not present in the given array.

// Example 1:
// Input Format:
//  N = 5, array[] = {1,2,4,5}
// Result:
//  3
// Explanation:
// In the given array, number 3 is missing. So, 3 is the answer.

// Example 2:
// Input Format:
//  N = 3, array[] = {1,3}
// Result:
//  2
// Explanation:
// In the given array, number 2 is missing. So, 2 is the answer.

#include <bits/stdc++.h>

using namespace std;

// Brute Force Approach

// int missingNumber(int arr[], int n)
// {

//     for (int i = 1; i <= n; i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (i == arr[j])
//             {
//                 flag = 1;
//                 break;
//             }
//         }

//         if (flag == 0)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// Better Approach -> using hashing

// int missingNumber(int arr[], int n)
// {
//     int numHash[n] = {0};

//     for (int i = 0; i < n - 1; i++)
//     {
//         numHash[arr[i]] = 1;
//     }

//     for (int i = 1; i < n; i++)
//     {
//         if (numHash[i] == 0)
//         {
//             return i;
//         }
//     }

//     return -1;
// }

// Optimal Approach 1 -> using sum

// int missingNumber(int arr[], int n)
// {
//     int sum = n * (n + 1) / 2;
//     int res = 0;

//     for (int i = 0; i < n - 1; i++)
//     {
//         res += arr[i];
//     }

//     return (sum - res);
// }

// Optimal Approach 2 -> using XOR

int missingNumber(int arr[], int n)
{
    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ n;

    return (xor1 ^ xor2);
}

int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = 5;

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int res = missingNumber(arr, n);

    cout << res << "\n";

    return 0;
}