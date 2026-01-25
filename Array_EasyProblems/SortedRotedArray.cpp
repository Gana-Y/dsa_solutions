#include <bits/stdc++.h>
using namespace std;

bool checkSortedAndRotated(vector<int>& nums) {
    int n = nums.size();
    int drops = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            drops++;
        }
        if (drops > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> nums = {3, 4, 5, 1, 2};

    if (checkSortedAndRotated(nums)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
