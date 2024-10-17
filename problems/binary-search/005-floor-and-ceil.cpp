// You're given an sorted array arr of n integers and an integer x. Find the floor and ceiling of x in arr[0..n-1].
// The floor of x is the largest element in the array which is smaller than or equal to x.
// The ceiling of x is the smallest element in the array greater than or equal to x.

// Example 1:
// Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 5
// Result: 4 7
// Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.

// Example 2:
// Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 8
// Result: 8 8
// Explanation: The floor of 8 in the array is 8, and the ceiling of 8 in the array is also 8.

#include <bits/stdc++.h>

using namespace std;

int floor(int arr[], int arrSize, int key)
{
    int low = 0, high = arrSize - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] <= key)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int ceil(int arr[], int arrSize, int key)
{
    int low = 0, high = arrSize - 1;

    int ans = arrSize;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= key)
        {
            ans = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int floor_res = floor(arr, arrSize, key);
    cout << "Floor " << floor_res << endl;
    int ceil_res = ceil(arr, arrSize, key);
    cout << "Ceil " << ceil_res << endl;
    return 0;
}