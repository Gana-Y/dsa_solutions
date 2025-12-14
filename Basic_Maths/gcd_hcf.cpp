// Problem: Find GCD / HCF of two numbers
// Type: Conceptual + Implementation / Basic Maths
// Approach: Euclidean Algorithm
// Time Complexity: O(log(min(a, b)))
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << a << endl;   // a is the GCD
    return 0;
}
