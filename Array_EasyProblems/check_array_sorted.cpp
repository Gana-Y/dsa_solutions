  /*
        Time Complexity: O(n)
        Reason:
        - We traverse the array once from index 0 to n-2.
        - Each comparison takes constant time O(1).
        - Total comparisons = n-1 → O(n)

        Space Complexity: O(1)
        Reason:
        - No extra data structures are used.
        - Only a few variables are used → constant space.
    */
#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
  

    for (int i = 0; i < n - 1; i++) {
        // If current element is greater than next element,
        // array is not sorted in non-decreasing order
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }

    // If no violation is found, array is sorted
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        cout << "Array is sorted";
    } else {
        cout << "Array is not sorted";
    }

    return 0;
}
