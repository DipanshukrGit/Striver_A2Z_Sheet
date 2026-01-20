/*
Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]

*/

//LEETCODE
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1, last = -1;

        int st = 0, end = n - 1;

        // find first occurrence
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                first = mid;
                end = mid - 1;
            } 
            else if (nums[mid] < target) {
                st = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }

        st = 0;
        end = n - 1;

        // find last occurrence
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                last = mid;
                st = mid + 1;
            } 
            else if (nums[mid] < target) {
                st = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }

        return {first, last};
    }
};


#include <iostream>
using namespace std;

// first occurrence
int firstOcc(int arr[], int n, int target) {
    int st = 0, end = n - 1;
    int ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target) {
            ans = mid;
            end = mid - 1;   // left search
        }
        else if (arr[mid] < target) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

// last occurrence
int lastOcc(int arr[], int n, int target) {
    int st = 0, end = n - 1;
    int ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target) {
            ans = mid;
            st = mid + 1;   // right search
        }
        else if (arr[mid] < target) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 4, 4, 4, 5, 7};
    int n = 7;
    int target = 4;

    cout << "First Occurrence: " << firstOcc(arr, n, target) << endl;
    cout << "Last Occurrence: " << lastOcc(arr, n, target) << endl;

    return 0;
}
