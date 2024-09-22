// Given an array of integers arr[] and an integer target.

// 1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

// 2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

// Note: You are not allowed to use the same element twice. Example: If the target is equal to 6 and num[1] = 3, then nums[1] + nums[1] = target is not a solution.

// Examples:

// Example 1:
// Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
// Result: YES (for 1st variant)
//        [1, 3] (for 2nd variant)
// Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for the first variant and [1, 3] for 2nd variant.

// Example 2:
// Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 15
// Result: NO (for 1st variant)
// 	[-1, -1] (for 2nd variant)
// Explanation: There exist no such two numbers whose sum is equal to the target.

#include <bits/stdc++.h>

using namespace std;

// Brute Force Approach

// string twoSum(vector<int> arr, int arrSize, int target)
// {
//     for (int i = 0; i < arrSize; i++)
//     {
//         for (int j = i + 1; j < arrSize; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 cout << arr[i] << " " << arr[j] << endl;
//                 return "YES";
//             }
//         }
//     }
//     return "NO";
// }

// Better Approach

// string twoSum(vector<int> &arr, int arrSize, int target)
// {
//     unordered_map<int, int> mpp;

//     for (int i = 0; i < arrSize; i++)
//     {
//         int num = target - arr[i];

//         if (mpp.find(num) != mpp.end())
//         {
//             cout << arr[i] << " " << num << endl;
//             return "YES";
//         }

//         mpp[arr[i]] = i;
//     }
//     return "NO";
// }

// Optimal Approach

string twoSum(vector<int> &arr, int arrSize, int target)
{
    sort(arr.begin(), arr.end());
    int left = 0, right = arrSize - 1;

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return "YES";
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return "NO";
}

int main()
{
    vector<int> arr = {2, 6, 7, 5, 8, 11};
    int target = 15;
    int arrSize = arr.size();

    string res = twoSum(arr, arrSize, target);
    cout << res << endl;

    return 0;
}