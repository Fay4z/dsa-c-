// Given an array of integers, rotating array of elements by k elements either left or right.

// Example 1:
// Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
// Output: 6 7 1 2 3 4 5
// Explanation: array is rotated to right by 2 position .

// Example 2:
// Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left
// Output: 9 10 11 3 7 8
// Explanation: Array is rotated to right by 3 position.

#include <bits/stdc++.h>

using namespace std;

// Brute Force Approach
// void leftRotateByD(int arr[], int arrSize, int k)
// {
//     int temp[k];
//     k = k % arrSize;

//     for (int i = 0; i < k; i++)
//     {
//         temp[i] = arr[i];
//     }

//     for (int i = k; i < arrSize; i++)
//     {
//         arr[i - k] = arr[i];
//     }
//     int j = 0;
//     for (int i = arrSize - k; i < arrSize; i++)
//     {
//         arr[i] = temp[j++];
//     }
//     cout << endl;
// }

// Optimal Approach

void Reverse(int arr[], int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotateByD(int arr[], int arrSize, int k)
{
    Reverse(arr, 0, k - 1);
    Reverse(arr, k, arrSize - 1);
    Reverse(arr, 0, arrSize - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    leftRotateByD(arr, arrSize, k);

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}