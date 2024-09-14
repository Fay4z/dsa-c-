// Given an array, we have to find the largest element in the array.

// Example 1:

// Input:
//  arr[] = {2,5,1,3,0};

// Output:
//  5

// Explanation:
//  5 is the largest element in the array.

// Example2:

// Input:
//  arr[] = {8,10,5,7,9};

// Output:
//  10

// Explanation:
//  10 is the largest element in the array.

#include <bits/stdc++.h>

using namespace std;

int largestElement(int arr[], int arrSize)
{
    int largest = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 5};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int element = largestElement(arr, arrSize);
    cout << element;
    return 0;
}