// Problem: Print numbers from N to 1 using recursion
// Type: Conceptual + Implementation
// Approach: Print first, then recursive call
// Time Complexity: O(N)
// Space Complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

void printNto1(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNto1(n - 1);
}

int main() {
    int n;
    cin >> n;
    printNto1(n);
    return 0;
}
