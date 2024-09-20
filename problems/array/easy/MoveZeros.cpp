// You are given an array of integers, your task is to move all the zeros in the array to the end of the array and
// move non-negative integers to the front by maintaining their order.

// Example 1:
// Input:
//  1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output:
//  1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
// Explanation:
//  All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

// Example 2:
// Input:
//  1,2,0,1,0,4,0
// Output:
//  1,2,1,4,0,0,0
// Explanation:
//  All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

#include <bits/stdc++.h>

using namespace std;

// Brute force Approach

// void moveZerosToEnd(int arr[], int arrSize)
// {
//     vector<int> temp;

//     // Add non-zero elements to the temp array
//     for (int i = 0; i < arrSize; i++)
//     {
//         if (arr[i] != 0)
//         {
//             temp.push_back(arr[i]);
//         }
//     }

//     // Then, put the elements in the temp array to the original array
//     for (int i = 0; i < temp.size(); i++)
//     {
//         arr[i] = temp[i];
//     }

//     // Put the remaining places as zero
//     for (int i = temp.size() + 1; i < arrSize; i++)
//     {
//         arr[i] = 0;
//     }
// }

// Optiimal Approach
void moveZerosToEnd(int arr[], int arrSize)
{
    int j = -1;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
    {
        cout << "There are no zeros in the array" << endl;
    }

    for (int i = j + 1; i < arrSize; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 0, 1, 0, 4, 0};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    moveZerosToEnd(arr, arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}