// Problem: Print something N times using recursion
// Type: Implementation / Basic Recursion
// Approach: Reduce N by 1 in each recursive call
// Time Complexity: O(N)
// Space Complexity: O(N) (recursive call stack)

#include <bits/stdc++.h>
using namespace std;

void printNTimes(int n) {
    if (n == 0) return;          // Base case
    cout << "Hello" << endl;
    printNTimes(n - 1);          // Recursive call
}

int main() {
    int n;
    cin >> n;
    printNTimes(n);
    return 0;
}
