/*
Rotate Array

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

*/

#include<iostream>
using namespace std;

int main(){
    int arr[5];

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;

    k = k;   // extra safety

    for(int a = 0; a < k; a++){
        int store = arr[4];

        for(int i = 4; i > 0; i--){
            arr[i] = arr[i - 1];
        }

        arr[0] = store;
    }

    // print once
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

