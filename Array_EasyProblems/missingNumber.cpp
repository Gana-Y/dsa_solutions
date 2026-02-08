#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int xorVal = 0;

    // XOR all numbers from 0 to n
    for(int i = 0; i <= n; i++)
        xorVal ^= i;

    // XOR all elements in array
    for(int num : nums)
        xorVal ^= num;

    return xorVal;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int ans = missingNumber(nums);
    cout << "Missing number is: " << ans;

    return 0;
}
