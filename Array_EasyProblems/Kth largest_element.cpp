 // Time Complexity: O(n log k)
// Space Complexity: O(k)

#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    // Min-heap to keep track of k largest elements
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < nums.size(); i++) {
        minHeap.push(nums[i]);          // add current element

        // if heap size exceeds k, remove the smallest element
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    // the top of min-heap is the kth largest element
    return minHeap.top();
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    cout << "Kth largest element is: " << findKthLargest(nums, k) << endl;
    return 0;
}
