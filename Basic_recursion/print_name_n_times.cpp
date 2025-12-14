// Problem: Print name N times using recursion
// Type: Implementation / Basic Recursion
// Approach: Print name and reduce N
// Time Complexity: O(N)
// Space Complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

void printName(int n) {
    if (n == 0) return;
    cout << "Ganesh" << endl;
    printName(n - 1);
}

int main() {
    int n;
    cin >> n;
    printName(n);
    return 0;
}
