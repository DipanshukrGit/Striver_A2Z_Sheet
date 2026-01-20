/*
Search Element in a Rotated Sorted Array

Problem Statement: Given an integer array nums, sorted in ascending order (with distinct values) and a target value k. The array is rotated at some pivot point that is unknown. Find the index at which k is present and if k is not present return -1.

Examples
Input:nums = [4, 5, 6, 7, 0, 1, 2], k = 0
Output :4
Explanation : Here, the target is 0. We can see that 0 is present in the given rotated sorted array, nums. Thus, we get output as 4, which is the index at which 0 is present in the array.

Input: nums = [4, 5, 6, 7, 0, 1, 2], k = 3
Output :-1
Explanation :Here, the target is 3. Since 3 is not present in the given rotated sorted array. Thus, we get the output as -1.
*/

class Solution {
public:
    int search(vector<int>& A, int tar) {
        int st = 0, end = A.size() - 1;
        
        while(st <= end) {
            int mid = st + (end - st) / 2;
            
            if(A[mid] == tar) {
                return mid;
            }
            
            // Left sorted portion
            if(A[st] <= A[mid]) {
                if(A[st] <= tar && tar <= A[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } 
            // Right sorted portion
            else {
                if(A[mid] <= tar && tar <= A[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        
        return -1; // Target not found
    }
};
