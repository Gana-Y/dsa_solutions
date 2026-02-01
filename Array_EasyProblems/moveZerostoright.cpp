#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int index = 0;   // position for next non-zero element

    // First pass: move non-zero elements to the front
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[index] = nums[i];
            index++;
        }
    }

    // Second pass: fill remaining positions with zero
    while (index < nums.size()) {
        nums[index] = 0;
        index++;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    for (int x : nums) {
        cout << x << " ";
    }
    return 0;
}
