/*

Two Sum : Check if a pair with given sum exists in Array

Problem Statement: Given an array of integers arr[] and an integer target.

1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

Examples

Input: N = 5, arr[] = {2,6,5,8,11}, target = 14
Output : YES
Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for first variant for second variant output will be : [1,3].

Input: N = 5, arr[] = {2,6,5,8,11}, target = 15
Output : NO.
Explanation: There exist no such two numbers whose sum is equal to the target. 

*/

#include <iostream>
using namespace std;
int main(){
     int n,target;
     cin>>n>>target;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"YES"<<endl;
                return 0;
            }
        }

     }
     cout<<"NO";
    return 0;
}


/*---------------------------------------------------------------------------------------------*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, target;
    cin >> n >> target;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Step 1: sort the array
    sort(arr, arr + n);

    // Step 2: two pointers
    int l = 0, r = n - 1;

    while(l < r){
        int sum = arr[l] + arr[r];

        if(sum == target){
            cout << "YES";
            return 0;
        }
        else if(sum < target){
            l++;
        }
        else{
            r--;
        }
    }

    cout << "NO";
    return 0;
}


/*---------------------------------------------------------------------------------------------*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int n, target;
    cin >> n >> target;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_set<int> s;

    for(int i = 0; i < n; i++){
        int need = target - arr[i];

        if(s.find(need) != s.end()){
            cout << "YES";
            return 0;
        }

        s.insert(arr[i]);
    }

    cout << "NO";
    return 0;
}
