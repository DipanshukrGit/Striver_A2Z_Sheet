/*
Longest Subarray with given Sum K(Positives)

Problem Statement: Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

Examples
Example 1:
Input:
 nums = [10, 5, 2, 7, 1, 9], k = 15
Output:
 4
Explanation:
 The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4. This sub-array starts at index 1 and ends at index 4, and the sum of its elements (5 + 2 + 7 + 1) equals 15. Therefore, the length of this sub-array is 4.

Example 2:
Input:
 nums = [-3, 2, 1], k = 6
Output:
 0
Explanation:
 There is no sub-array in the array that sums to 6. Therefore, the output is 0.

*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int k;
//     cin >> k;
//     int arr[6];

//     for (int i = 0; i < 6; i++)
//     {
//         cin >> arr[i];
//     }
//     int count = 0;
//     for (int j = 0; j < 6; j++)
//     {
//         int sum = 0;
//         for (int x = j; x < 6; x++)
//         {

//             sum += arr[x];

//             if (sum == k)
//             {
//                 count++;
//             }
//         }
//     }

//     cout << count;
//     return 0;
// }



#include<iostream>
using namespace std;

int main(){
    int k;
    cin >> k;

    int arr[6];   // 🔹 size fix
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }

    int maxLen = 0;   // 🔹 count → maxLen

    for(int j = 0; j < 6; j++){   // start index
        int sum = 0;
        for(int x = j; x < 6; x++){   // 🔹 x = j
            sum += arr[x];            // 🔹 ek hi baar add

            if(sum == k){
                int len = x - j + 1;
                if(len > maxLen){
                    maxLen = len;
                }
            }
        }
    }

    cout << maxLen;
    return 0;
}

