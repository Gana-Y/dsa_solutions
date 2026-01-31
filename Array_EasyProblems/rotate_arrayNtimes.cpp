#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();

    // Handle cases where k > n
    k = k % n;

    // Temporary array to store rotated values
    vector<int> temp(n);

    // Place each element at its new position
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = nums[i];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        nums[i] = temp[i];
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    cout << "Rotated array: ";
    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
