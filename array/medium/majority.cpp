/*
Find the Majority Element that occurs more than N/2 times

Problem Statement: Given an integer array nums of size n, return the majority element of the array.

The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.

Examples
Example 1:
Input:
 nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]  
Output:
 7  
Explanation:
 The number 7 appears 5 times in the 9-sized array, making it the most frequent element.

Example 2:
Input:
 nums = [1, 1, 1, 2, 1, 2]  
Output:
 1  
Explanation:
 The number 1 appears 4 times in the 6-sized array, making it the most frequent element.

*/



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int freq = 1;
    int ans = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1]){
            freq++;
        } else {
            freq = 1;
            ans = arr[i];
        }

        if(freq > n / 2){
            cout << ans;
            break;
        }
    }

    return 0;
}


/*--------------------------------------------------------------------------------------------------------------*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int freq = 0;
    int ans = 0;

    for(int i = 0; i < n; i++){
        if(freq == 0){
            ans = arr[i];
        }

        if(arr[i] == ans){
            freq++;
        } else {
            freq--;
        }
    }

    cout << ans;
    return 0;
}
