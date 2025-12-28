/*
Count Maximum Consecutive One's in the array

Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array..

Examples
Example 1:
Input: prices = {1, 1, 0, 1, 1, 1}
Output: 3
Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.

Example 2:
Input: prices = {1, 0, 1, 1, 0, 1} 
Output: 2
Explanation: There are two consecutive 1's in the array.

*/

#include<iostream>
using namespace std;
int main(){
    int arr[6];
   
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }

    int sum=0;
    int temp=0;
    for(int j=0;j<6;j++){
       if(arr[j]==1){
            sum++;
            if(sum>temp){
                temp=sum;
            }
        }else{
            
            sum=0;
        }
    }

    cout<<temp;

    


}