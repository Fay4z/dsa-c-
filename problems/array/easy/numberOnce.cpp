// Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

// Example 1:
// Input Format:
//  arr[] = {2,2,1}
// Result:
//  1
// Explanation:
//  In this array, only the element 1 appear once and so it is the answer.

// Example 2:
// Input Format:
//  arr[] = {4,1,2,1,2}
// Result:
//  4
// Explanation:
//  In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.

#include <bits/stdc++.h>

using namespace std;

// Brute Force Approach

// int appearsOnce(int arr[], int arrSize)
// {
//     int count = 0;
//     for (int i = 0; i < arrSize; i++)
//     {
//         for (int j = 0; j < arrSize; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count += 1;
//             }
//         }

//         if (count == 1)
//         {
//             return arr[i];
//         }
//         else
//         {
//             count = 0;
//         }
//     }
//     return -1;
// }

// Better Approach -> using hashing
// If the arr is greater than 10^6 , then we can use map

// int appearsOnce(int arr[], int arrSize)
// {
//     int maxNum = 0;

//     for (int i = 0; i < arrSize; i++)
//     {
//         maxNum = max(arr[i], maxNum);
//     }

//     int hashArr[maxNum + 1] = {0};

//     for (int i = 0; i < arrSize; i++)
//     {
//         hashArr[arr[i]] += 1;
//     }

//     for (int i = 0; i < arrSize; i++)
//     {
//         if (hashArr[i] == 1)
//         {
//             return i;
//         }
//     }

//     return -1;
// }

// Optimal Approach -> using XOR

int appearsOnce(int arr[], int arrSize)
{
    int xor1 = 0;
    for (int i = 0; i < arrSize; i++)
    {
        xor1 = xor1 ^ arr[i];
    }
    return xor1;
}

int main()
{
    int arr[] = {1, 2, 1, 4, 2};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int res = appearsOnce(arr, arrSize);

    cout << res << endl;
    return 0;
}