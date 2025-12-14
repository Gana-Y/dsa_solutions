// Problem: Print numbers from 1 to N using recursion
// Type: Conceptual + Implementation
// Approach: Recursive call first, then print
// Time Complexity: O(N)
// Space Complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

void print1toN(int n) {
    if (n == 0) return;
    print1toN(n - 1);    // Recursive call
    cout << n << " ";    // Print while returning
}

int main() {
    int n;
    cin >> n;
    print1toN(n);
    return 0;
}
