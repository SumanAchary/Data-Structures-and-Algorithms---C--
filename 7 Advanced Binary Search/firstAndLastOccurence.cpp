#include <bits/stdc++.h>
using namespace std;

// binary search use karo bhai, link below is the same leetcode question
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution
{
public:
    int getFirst(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
            {
                ans = mid;
                end = mid - 1; // LHS for the starting position.
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }

    int getLast(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
            {
                ans = mid;
                start = mid + 1; // RHS for the last position.
                // return mid;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {

        vector<int> v(2, -1);
        int first = getFirst(nums, target);

        if (first == -1)
        {
            return v;
        }
        int last = getLast(nums, target);
        v[0] = first;
        v[1] = last;
        return v;
    }
};

// using array 2 pointer method {LINEAR}
// void first_last_occurence(int arr[], int len, int targetElement)
// {
//     int left = 0;
//     int right = len - 1;

//     while (left < right)
//     {
//         while (arr[left] != targetElement)
//         {
//             left++;
//         }

//         while (arr[right] != targetElement)
//         {
//             right--;
//         }

//         if (arr[left] == targetElement && arr[right] == targetElement)
//         {
//             break;
//         }
//     }

//     cout << "\n First index of the target element is: " << left << "\n Last index is: " << right;
// }

// int main()
// {

//     int arr[] = {1, 2, 3, 4, 5, 5, 5, 5, 6, 7, 9, 7, 5, 9, 9, 9};
//     int len = sizeof(arr) / sizeof(arr[0]);
//     first_last_occurence(arr, len, 5);
//     return 0;
// }
