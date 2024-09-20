// Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

// Example 1:
// Input:

// n = 5,m = 5.
// arr1[] = {1,2,3,4,5}
// arr2[] = {2,3,4,4,5}
// Output:

//  {1,2,3,4,5}

// Explanation:

// Common Elements in arr1 and arr2  are:  2,3,4,5
// Distnict Elements in arr1 are : 1
// Distnict Elemennts in arr2 are : No distinct elements.
// Union of arr1 and arr2 is {1,2,3,4,5}

#include <bits/stdc++.h>

using namespace std;

// Brute Force Approach

// vector<int> unionOfArrays(int arr1[], int arr2[], int arrSize1, int arrSize2)
// {
//     set<int> unionArr;

//     for (int i = 0; i < arrSize1; i++)
//     {
//         unionArr.insert(arr1[i]);
//     }

//     for (int i = 0; i < arrSize2; i++)
//     {
//         unionArr.insert(arr2[i]);
//     }

//     vector<int> temp;
//     for (auto it : unionArr)
//     {
//         temp.push_back(it);
//     }
//     return temp;
// }

// Optimal Approach using 2-pointer

vector<int> unionOfArrays(int arr1[], int arr2[], int arrSize1, int arrSize2)
{

    vector<int> unionArr;
    int i = 0;
    int j = 0;

    while (i < arrSize1 && j < arrSize2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i])
            {

                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (j < arrSize2)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    while (i < arrSize1)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr1[i])
        {

            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    return unionArr;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5, 6};
    int arrSize1 = sizeof(arr1) / sizeof(arr1[0]);
    int arrSize2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> unionArray = unionOfArrays(arr1, arr2, arrSize1, arrSize2);

    for (auto it : unionArray)
    {
        cout << it << " ";
    }
    return 0;
}