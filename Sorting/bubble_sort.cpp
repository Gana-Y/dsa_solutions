// Algorithm: Bubble Sort
// Difficulty: Easy
// Type: Conceptual
// Time Complexity:
//   Best Case: O(N)  (already sorted, with optimization)
//   Average Case: O(N^2)
//   Worst Case: O(N^2)
// Space Complexity: O(1)

// Approach:
// Repeatedly compare adjacent elements and swap them if they are in wrong order.
// After each pass, the largest element moves to the end of the array.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no swaps happened, array is already sorted
        if (!swapped) break;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
