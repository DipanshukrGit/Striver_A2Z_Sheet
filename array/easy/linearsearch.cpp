/*
Linear Search 

Example 1:
Input:
 arr[] = 1 2 3 4 5, num = 3  
Output:
 2  
Explanation:
 3 is present at the 2nd index of the array.

Example 2:
Input:
 arr[] = 5 4 3 2 1, num = 5  
Output:
 0  
Explanation:
 5 is present at the 0th index of the array.

*/

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int num;
    cin >> num;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    bool found = false;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == num) {
            cout << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << -1 << endl;
    }

    return 0;
}
