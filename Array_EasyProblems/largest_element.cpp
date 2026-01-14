// Time Complexity: O(n) (optimal)
// Space Complexity: O(1) extra space

#include <bits/stdc++.h>
using namespace std;

// ---- LOGIC (this is what interviews test) ----
int largest(vector<int>& arr) {
    int mx = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }
    return mx;
}

// ---- TESTING ONLY ----
int main() {
    vector<int> arr = {1, 8, 7, 56, 90};
    cout << largest(arr);
    return 0;
}
