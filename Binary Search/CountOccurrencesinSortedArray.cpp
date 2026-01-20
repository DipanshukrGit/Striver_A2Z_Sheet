/*
Count Occurrences in Sorted Array

Problem Statement: You are given a sorted array containing N integers and a number X, you have to find the occurrences of X in the given array.

Examples
Example 1:
Input:
 N = 7,  X = 3 , array[] = {2, 2 , 3 , 3 , 3 , 3 , 4}
Output
: 4
Explanation:
 3 is occurring 4 times in 
the given array so it is our answer.

Example 2:
Input:
 N = 8,  X = 2 , array[] = {1, 1, 2, 2, 2, 2, 2, 3}
Output
: 5
Explanation:
 2 is occurring 5 times in the given array so it is our answer.

*/


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

        return (last-first)+1;
    }
};