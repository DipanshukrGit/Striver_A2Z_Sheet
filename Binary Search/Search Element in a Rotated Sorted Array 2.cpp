/*
Search Element in Rotated Sorted Array II

Problem Statement: Given an integer array arr of size N, sorted in ascending order (may contain duplicate values) and a target value k. Now the array is rotated at some pivot point unknown to you. Return True if k is present and otherwise, return False.

Examples
Example 1:
Input Format: arr = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 3
Result: True
Explanation: The element 3 is present in the array. So, the answer is True.

Example 2:
Input Format: arr = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 10
Result: False
Explanation: The element 10 is not present in the array. So, the answer is False.

*/

class Solution {
public:
    bool search(vector<int>& A, int tar) {
        int st = 0, end = A.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (A[mid] == tar)
                return true;

            // ⭐ duplicates case
            if (A[st] == A[mid] && A[mid] == A[end]) {
                st++;
                end--;
            }
            // Left part sorted
            else if (A[st] <= A[mid]) {
                if (A[st] <= tar && tar < A[mid])
                    end = mid - 1;
                else
                    st = mid + 1;
            }
            // Right part sorted
            else {
                if (A[mid] < tar && tar <= A[end])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return false;
    }
};
