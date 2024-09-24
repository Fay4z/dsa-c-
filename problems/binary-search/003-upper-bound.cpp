// The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than the given key i.e. x.

// The upper bound is the smallest index, ind, where arr[ind] > x.

// But if any such index is not found, the upper bound algorithm returns n i.e. size of the given array. The main difference between the lower and upper bound is in the condition. For the lower bound the condition was arr[ind] >= x and here, in the case of the upper bound, it is arr[ind] > x.

#include <bits/stdc++.h>

using namespace std;

int upperBoundFunction(int arr[], int arrSize, int x)
{
    int low = 0, high = arrSize - 1;
    int ans = arrSize;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] > x)
        {
            ans = mid;
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
    int arr[] = {1, 2, 3, 4, 5, 6};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int res = upperBoundFunction(arr, arrSize, x);
    cout << res;
    return 0;
}