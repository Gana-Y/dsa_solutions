/*
    Program: Second Largest Element in an Array (Without Sorting)

    Time Complexity:
    - O(n), because the array is traversed exactly once.

    Space Complexity:
    - O(1), because only two extra variables are used
      (largest and second_largest), regardless of input size.
*/
#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& arr) {
    // Edge case: if array has less than 2 elements
    if (arr.size() < 2) {
        return -1;  // no second largest
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {

        // Case 1: current element becomes the new largest
        if (arr[i] > largest) {
            secondLargest = largest;   // preserve old largest
            largest = arr[i];
        }
        // Case 2: current element is between largest and secondLargest
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    // If secondLargest was never updated, it doesn't exist
    if (secondLargest == INT_MIN) {
        return -1;
    }

    return secondLargest;
}

int main() {
    vector<int> arr = {10, 30, 40, 20};

    int result = secondLargest(arr);

    if (result == -1) {
        cout << "Second largest element does not exist";
    } else {
        cout << "Second largest element is: " << result;
    }

    return 0;
}

