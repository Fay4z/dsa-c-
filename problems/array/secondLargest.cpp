// Given an array, find the second smallest and second largest element in the array.
// Print ‘-1’ in the event that either of them doesn’t exist.

// Example 1:
// Input:
//  [1,2,4,7,7,5]
// Output:
//  Second Smallest : 2
// 	Second Largest : 5
// Explanation:
//  The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

// Example 2:
// Input:
//  [1]
// Output:
//  Second Smallest : -1
// 	Second Largest : -1
// Explanation:
//  Since there is only one element in the array, it is the largest and smallest element present in the array.
//  There is no second largest or second smallest element present.

#include <bits/stdc++.h>

using namespace std;

int secondLargest(int arr[], int arrSize)
{
    int largest = 0;
    int secondLargest = -1;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int secondSmallest(int arr[], int arrSize)
{
    int small = INT_MAX;
    int secondSmall = INT_MAX;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] < small)
        {
            secondSmall = small;
            small = arr[i];
        }
        else if (arr[i] < secondSmall && arr[i] != small)
        {
            secondSmall = arr[i];
        }
    }

    return secondSmall;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int secondLargestElement = secondLargest(arr, arrSize);
    int secondSmallestElement = secondSmallest(arr, arrSize);
    cout << "Second Largest Element: " << secondLargestElement << endl;
    cout << "Second Smallest Element: " << secondSmallestElement << endl;
    return 0;
}