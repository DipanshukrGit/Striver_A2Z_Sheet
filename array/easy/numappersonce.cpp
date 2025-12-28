/*
Find the number that appears once, and the other numbers twice

Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

Examples
Example 1:
Input Format: arr[] = {2,2,1}
Result: 1
Explanation: In this array, only the element 1 appear once and so it is the answer.


Example 2:
Input Format: arr[] = {4,1,2,1,2}
Result: 4
Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.

*/


#include<iostream>
using namespace std;

int main(){
    int arr[3];

    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }

    int un = 0;
    for(int j = 0; j < 3; j++){
        un ^= arr[j];   // cumulative XOR
    }

    cout << un;
}
