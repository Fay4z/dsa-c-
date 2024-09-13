#include <bits/stdc++.h>

using namespace std;

void reverseArray(int arr[], int start, int end)
{

    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, 0, arrSize - 1);

    for (int i = 0; i <= arrSize - 1; i++)
    {
        cout << arr[i] << " ";
    }
}