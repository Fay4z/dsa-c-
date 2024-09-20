#include <bits/stdc++.h>

using namespace std;

// Brute Force Approach

// vector<int> intersectionOfArrays(int arr1[], int arr2[], int a1, int a2)
// {
//     vector<int> visted(a2, 0);
//     vector<int> interArr;
//     for (int i = 0; i < a1; i++)
//     {
//         for (int j = 0; j < a2; j++)
//         {
//             if (arr1[i] == arr2[j] && visted[j] == 0)
//             {
//                 visted[j] = 1;
//                 interArr.push_back(arr1[i]);
//                 break;
//             }
//             if (arr2[j] > arr1[i])
//                 break;
//         }
//     }

//     return interArr;
// }

// Optimal Approach

vector<int> intersectionOfArrays(int arr1[], int arr2[], int a1, int a2)
{
    vector<int> interArr;
    int i = 0;
    int j = 0;

    while (i < a1 && j < a2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }

        else if (arr2[j] < arr1[i])
        {
            j++;
        }

        else
        {
            interArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return interArr;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 4, 5};
    int arr2[] = {2, 3, 4, 5, 6};

    int a1 = sizeof(arr1) / sizeof(arr1[0]);
    int a2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> interArr = intersectionOfArrays(arr1, arr2, a1, a2);

    for (auto it : interArr)
    {
        cout << it << " ";
    }

    return 0;
}