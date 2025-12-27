/*Check if an Array is Sorted

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: True.
Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.

Example 2:
Input: N = 5, array[] = {5,4,6,7,8}
Output: False.
Explanation: The given array is Not sorted i.e Every element in the array is not smaller than or equal to its next values, So the answer is False.
Here element 5 is not smaller than or equal to its future elements.

*/

#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    bool sorted = true;

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < 4; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if(sorted)
        cout << "true";
    else
        cout << "false";

    return 0;
}
