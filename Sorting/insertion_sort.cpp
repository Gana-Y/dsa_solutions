// Algorithm: Insertion Sort
// Difficulty: Easy
// Type: Sorting / Conceptual
// Approach:
// - Take one element at a time
// - Place it in its correct position in the sorted part (left side)
// Time Complexity:
//   Best Case: O(N)    (already sorted)
//   Average Case: O(N^2)
//   Worst Case: O(N^2)
// Space Complexity: O(1) (in-place)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int key = arr[i];     // element to be inserted
        int j = i - 1;

        // Shift elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place key at its correct position
        arr[j + 1] = key;
    }

    // Print sorted array
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
