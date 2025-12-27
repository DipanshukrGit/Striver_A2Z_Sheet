/*Find Second Smallest and Second Largest Element in an array
Input:
[1, 2, 4, 7, 7, 5]
Output:
Second Smallest : 2
Second Largest : 5
Explanation:
  The elements are sorted as 1, 2, 4, 5, 7, 7.
Hence, the second smallest element is 2, and the second largest element is 5.
*/





#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[1000];

    // input
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // smallest
    int minn = INT_MAX;
    for(int i = 0; i < 5; i++) {
        minn = min(minn, arr[i]);
    }

    // second smallest
    int second = INT_MAX;
    for(int i = 0; i < 5; i++) {
        if(arr[i] != minn) {
            second = min(second, arr[i]);
        }
    }

    // largest
    int large = INT_MIN;
    for(int i = 0; i < 5; i++) {
        large = max(large, arr[i]);
    }

    // second largest
    int secondd = INT_MIN;
    for(int i = 0; i < 5; i++) {
        if(arr[i] != large) {
            secondd = max(secondd, arr[i]);
        }
    }

    cout << "second smallest: " << second << endl;
    cout << "second largest: " << secondd << endl;

    return 0;
}
