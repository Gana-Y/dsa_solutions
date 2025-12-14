// Problem: Count number of digits in a number
// Category: Basic Maths
// Approach: Repeated division
// Time Complexity: O(log10(n))
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            count++;
            n = n / 10;
        }
    }

    cout << count << endl;
    return 0;
}
