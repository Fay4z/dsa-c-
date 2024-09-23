#include <bits/stdc++.h>

using namespace std;

// Iterative Approach
int bs(int arr[], int arrSize, int target)
{
    int low = 0, high = arrSize - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

// For recursive Approach, refer striver-dsa

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int res = bs(arr, arrSize, target);
    cout << res;

    return 0;
}