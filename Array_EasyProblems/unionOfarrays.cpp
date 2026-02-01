#include <iostream>
#include <vector>

using namespace std;

vector<int> findUnionSorted(const vector<int>& a, const vector<int>& b) {
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;
    vector<int> unionRes;

    while (i < n && j < m) {
        // Pick the smaller element to maintain sorted order
        if (a[i] <= b[j]) {
            // Only add if it's the first element or not a duplicate of the last added
            if (unionRes.empty() || unionRes.back() != a[i]) {
                unionRes.push_back(a[i]);
            }
            // Move both pointers if elements are equal to skip redundant checks
            if (a[i] == b[j]) j++;
            i++;
        } else {
            if (unionRes.empty() || unionRes.back() != b[j]) {
                unionRes.push_back(b[j]);
            }
            j++;
        }
    }

    // Add remaining elements from array 'a'
    while (i < n) {
        if (unionRes.back() != a[i]) unionRes.push_back(a[i]);
        i++;
    }

    // Add remaining elements from array 'b'
    while (j < m) {
        if (unionRes.back() != b[j]) unionRes.push_back(b[j]);
        j++;
    }

    return unionRes;
}

int main() {
    vector<int> a = {1, 1, 2, 2, 3, 4};
    vector<int> b = {2, 2, 3, 4, 5, 6};

    vector<int> result = findUnionSorted(a, b);

    for (int x : result) cout << x << " "; // Output: 1 2 3 4 5 6
    return 0;
}
