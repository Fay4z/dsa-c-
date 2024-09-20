//  Given an array of N integers, left rotate the array by one place.

// Example 1:
// Input:
//  N = 5, array[] = {1,2,3,4,5}
// Output:
//  2,3,4,5,1
// Explanation:

// Since all the elements in array will be shifted
// toward left by one so ‘2’ will now become the
// first index and and ‘1’ which was present at
// first index will be shifted at last.

// Example 2:
// Input:
//  N = 1, array[] = {3}
// Output:
//  3
// Explanation:
//  Here only element is present and so
// the element at first index will be shifted to
// last index which is also by the way the first index.

#include <bits/stdc++.h>

using namespace std;

void leftRotateByOne(int arr[], int arrSize)
{
    int firstElement = arr[0];
    for (int i = 1; i < arrSize; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[arrSize - 1] = firstElement;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    leftRotateByOne(arr, arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}