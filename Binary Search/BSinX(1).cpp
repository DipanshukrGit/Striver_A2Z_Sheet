/*
Problem statement: You are given a sorted array of integers and a target, your task is to search for the target in the given array. Assume the given array does not contain any duplicate numbers.

Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
*/

//LEETCODE:-
class Solution {
public:
    int search(vector<int>& nums, int target) {
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
        
     return -1;
    }
};


//BASIC
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
      return -1;
    }
}