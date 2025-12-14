// Problem: Find sum of first N numbers
// Type: Conceptual + Implementation
// Approach: Recurrence relation sum(n) = n + sum(n-1)
// Time Complexity: O(N)
// Space Complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

int sumN(int n) {
    if (n == 0) return 0;
    return n + sumN(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << sumN(n) << endl;
    return 0;
}
