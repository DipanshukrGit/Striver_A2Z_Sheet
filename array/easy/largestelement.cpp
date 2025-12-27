/*Find the Largest element in an array

Input:
 arr[] = {2, 5, 1, 3, 0}  
Output:
 5  
Explanation:
  5 is the largest element in the array.
*/


#include<iostream>
using namespace std;
int main(){
  int arr[1000];
  int large=INT_MIN;
  for(int i=0;i<=5;i++){
    cin>>arr[i];
  }
for(int i=0;i<=5;i++){
    if(arr[i]>large){
      large=arr[i];
    }
    
  }
  cout<< large;
}