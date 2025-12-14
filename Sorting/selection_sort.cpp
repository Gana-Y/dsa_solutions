// Algorithm: Selection Sort
// Difficulty: Easy
// Type: Sorting / Conceptual
// Approach:
// - Select the minimum element from unsorted part
// - Swap it with the first unsorted position
// Time Complexity:
//   Best / Average / Worst Case: O(N^2)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
