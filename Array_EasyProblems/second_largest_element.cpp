#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr) {
    int n = arr.size();
    if (n < 2) return -1;

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } 
        else if (arr[i] < largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

    return (second_largest == INT_MIN) ? -1 : second_largest;
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << getSecondLargest(arr);
    return 0;
}
