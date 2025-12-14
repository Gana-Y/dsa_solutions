// Problem: Count frequency of each element in an array
// Type: Hashing / Frequency Counting
// Approach: Use unordered_map to store element -> count
// Time Complexity: O(N) average
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

    // Hash map to store frequency
    unordered_map<int, int> freq;

    // Count frequency
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print frequencies
    for (auto it : freq) {
        cout << "Element: " << it.first 
             << " Frequency: " << it.second << endl;
    }

    return 0;
}
