// Problem: Find element with highest and lowest frequency
// Type: Hashing
// Approach:
// 1. Count frequencies using unordered_map
// 2. Traverse map to find max and min frequency
// Time Complexity: O(N)
// Space Complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    // Count frequency of each element
    for (int x : arr) {
        freq[x]++;
    }

    int maxFreq = 0;
    int minFreq = n;
    int maxElement = arr[0];
    int minElement = arr[0];

    // Find highest and lowest frequency
    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxElement = it.first;
        }

        if (it.second < minFreq) {
            minFreq = it.second;
            minElement = it.first;
        }
    }

    cout << "Highest Frequency Element: " << maxElement << endl;
    cout << "Lowest Frequency Element: " << minElement << endl;

    return 0;
}
