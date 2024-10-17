// The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.

// The lower bound is the smallest index, ind, where arr[ind] >= x. But if any such index is not found, the lower bound algorithm returns n i.e. size of the given array.

#include <bits/stdc++.h>

using namespace std;

int loweBoundFunction(int arr[], int arrSize, int x)
{
    int low = 0, high = arrSize - 1;
    int ans = arrSize;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x)
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
    int x = 4;

    int res = loweBoundFunction(arr, arrSize, x);
    cout << res;
    return 0;
}