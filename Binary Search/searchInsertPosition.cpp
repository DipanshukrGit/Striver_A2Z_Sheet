/*
Search Insert Position

Problem Statement: You are given a sorted array arr of distinct values and a target value x. You need to search for the index of the target value in the array.

Examples
Example 1:
Input Format: arr[] = {1,2,4,7}, x = 6
Result: 3
Explanation: 6 is not present in the array. So, if we will insert 6 in the 3rd index(0-based indexing), the array will still be sorted. {1,2,4,6,7}.

Example 2:
Input Format: arr[] = {1,2,4,7}, x = 2
Result: 1
Explanation: 2 is present in the array and so we will return its index i.e. 1.

*/

//leetcode
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st =0,end=nums.size()-1;
        int mid;
        while(st<=end){
      mid=(st+end)/2;
     if(target>nums[mid]){
        st=mid+1;
     }
     else if(target<nums[mid]){
        end=mid-1;
     }
     else{
        return mid;
     }
    }
        
     return st;
    }
        
    
};

//basic
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
     int st =0,end=n-1,target;
    while(st<=end){
     int mid=(st+end)/2;
     if(target>arr[mid]){
        st=mid+1;
     }
     else if(target<arr[mid]){
        end=mid-1;
     }
     else{
        
        return mid;
     }
      return st;
    }
}