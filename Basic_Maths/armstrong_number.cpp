// Problem: Check if a number is an Armstrong number
// Type: Conceptual + Implementation / Basic Maths
// Approach: Count digits, then sum of each digit raised to power of digits
// Time Complexity: O(d) where d = number of digits
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;

    // count digits
    int digits = 0;
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;

    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong" << endl;
    else
        cout << "Not Armstrong" << endl;

    return 0;
}
