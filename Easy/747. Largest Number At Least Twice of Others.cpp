// Problem Link : https://leetcode.com/problems/largest-number-at-least-twice-of-others/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	int dominantIndex(vector<int>& nums) {
		int n = nums.size();
		int maxIndex = -1;
		int maxElement = INT_MIN;

		for (int i = 0; i < n; ++i) {
			if (nums[i] > maxElement) {
				maxIndex = i;
				maxElement = nums[i];
			}
		}
		int count = 0;
		for (int j = 0; j < n; ++j) {
			if (j != maxIndex and nums[j] * 2 <= maxElement) {
				count++;
			}
		}
		if (count == n - 1) return maxIndex;
		return -1;
	}
};
