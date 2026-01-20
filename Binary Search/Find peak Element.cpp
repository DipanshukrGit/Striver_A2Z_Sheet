/*
Peak element in Array

Problem Statement: Given an array of length N, peak element is defined as the element greater than both of its neighbors. Formally, if arr[i] is the peak element, arr[i - 1] < arr[i] and arr[i + 1] < arr[i]. Find the index(0-based) of a peak element in the array. If there are multiple peak numbers, return the index of any peak number.

Examples
Input: arr[] = {1,2,3,4,5,6,7,8,5,1}
Output: 7
Explanation: There is only 1 peak element, 8,  that is at index 7.
Input: arr[] = {1,2,1,3,5,6,4} 
Output: 1 
Explanation : There are 2 peak numbers that are at indices 1 and 5. We can return any of them.

*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
    int n=nums.size();
    // edge case
        if (n == 1) return 0;

        // check first and last
        if (nums[0] > nums[1]) return 0;
        if (nums[n-1] > nums[n-2]) return n-1;
    int st=1,end=n-2;
    while(st<=end){
        int mid=(st+end)/2;
        if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
            return mid;
        }
        else if(nums[mid-1]<nums[mid]){
            st=mid+1;

        }else{
            end=mid-1;
        }
    }
     
    return -1;
    }
   
   

};