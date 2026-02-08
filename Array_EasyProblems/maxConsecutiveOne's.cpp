#include <iostream>
#include <vector>
using namespace std;

int consecutiveOnes(vector<int>& nums) {
    int maxCount = 0;
    int current = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 1) {
            current++;
            maxCount = max(maxCount, current);
        }
        else {
            current = 0;
        }
    }

    return maxCount;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements (0/1): ";
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Maximum consecutive ones: " << consecutiveOnes(nums);
}
