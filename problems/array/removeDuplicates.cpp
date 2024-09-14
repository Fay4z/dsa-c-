//  Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once.
//  The relative order of the elements should be kept the same.

//  If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result.
//  It does not matter what you leave beyond the first k elements.

// Note: Return k after placing the final result in the first k slots of the array.

// Example 1:
// Input:
//  arr[1,1,2,2,2,3,3]

// Output:
//  arr[1,2,3,_,_,_,_]

// Explanation:
//  Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.

// Example 2:
// Input:
//  arr[1,1,1,2,2,3,3,3,3,4,4]

// Output:
//  arr[1,2,3,4,_,_,_,_,_,_,_]

// Explanation:
//  Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.

#include <bits/stdc++.h>

using namespace std;

// Brute Force Approach

// int removeDuplicates(int arr[], int arrSize)
// {
//     set<int> st;

//     for (int i = 0; i < arrSize; i++)
//     {
//         st.insert(arr[i]);
//     }
//     int k = st.size();
//     int j = 0;
//     for (auto it : st)
//     {
//         arr[j++] = it;
//     }

//     return k;
// }

// Optimal Approach

int removeDuplicates(int arr[], int arrSize)
{
    int i = 0;
    for (int j = 1; j <= arrSize; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    return i;
}

int main()
{
    int arr[] = {1, 1, 2, 3, 4, 4, 5, 6, 6};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int k = removeDuplicates(arr, arrSize);

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}