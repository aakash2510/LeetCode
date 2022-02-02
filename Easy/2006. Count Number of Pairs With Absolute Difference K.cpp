// Problem Link : https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/

// Time : O(N^2)
// Space : O(1)

class Solution {
public:
	int countKDifference(vector<int>& nums, int k) {
		int n = nums.size();
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (abs(nums[i] - nums[j]) == k) {
					cnt++;
				}
			}
		}
		return cnt;
	}
};
