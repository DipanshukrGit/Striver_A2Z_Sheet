/*
Move all Zeros to the end of the array

Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order
Input : 1,2,0,1,0,4,0
Output: 1,2,1,4,0,0,0
Explanation : All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

*/

#include<iostream>
using namespace std;
int main(){
     int arr[5];

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

  
    for(int i=0;i<5;i++){
        if(arr[i]==0){
            for(int j=i+1;j<5;j++){
                if(arr[j]!=0){
                  swap(arr[i],arr[j]);
                  break;
                }
            }
        }
    }

    for(int i = 0; i < 5; i++){
        cout << arr[i];
    }

}