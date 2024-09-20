// Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not.
// If the array is sorted then return True, Else return False.

// Note: Two consecutive equal values are considered to be sorted.

// Example 1:
// Input:
//  N = 5, array[] = {1,2,3,4,5}
// Output
// : True.
// Explanation:
//  The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.

// Example 2:
// Input:
//  N = 5, array[] = {5,4,6,7,8}
// Output
// : False.
// Explanation:
//  The given array is Not sorted i.e Every element in the array is not smaller than or equal to its next values, So the answer is False.

// Here element 5 is not smaller than or equal to its future elements.

#include <bits/stdc++.h>

using namespace std;

bool arraySorted(int arr[], int arrSize)
{
    for (int i = 1; i < arrSize; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {5, 6, 6, 7, 8};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int checkSorted = arraySorted(arr, arrSize);
    cout << checkSorted << endl;
    return 0;
}