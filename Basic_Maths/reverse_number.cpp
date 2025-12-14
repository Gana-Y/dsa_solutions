// Problem: Reverse a number
// Type: Implementation / Basic Maths
// Approach: Digit extraction using modulo and division
// Time Complexity: O(log10(n))
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int rev = 0;

    while (n != 0) {
        int digit = n % 10;        // get last digit
        rev = rev * 10 + digit;    // build reverse
        n = n / 10;                // remove last digit
    }

    cout << rev << endl;
    return 0;
}
