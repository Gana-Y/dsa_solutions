// Problem: Check if a string is palindrome using recursion
// Type: Conceptual + Implementation
// Approach: Compare characters from both ends
// Time Complexity: O(N)
// Space Complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int l, int r) {
    if (l >= r) return true;
    if (s[l] != s[r]) return false;
    return isPalindrome(s, l + 1, r - 1);
}

int main() {
    string s;
    cin >> s;

    if (isPalindrome(s, 0, s.size() - 1))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
