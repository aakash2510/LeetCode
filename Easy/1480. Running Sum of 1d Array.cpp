// Problem Link : https://leetcode.com/problems/running-sum-of-1d-array/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	vector<int> runningSum(vector<int>& nums) {
		int n = nums.size();
		int currSum = 0;
		for (int i = 0; i < n; ++i) {
			currSum += nums[i];
			nums[i] = currSum;
		}
		return nums;
	}
};
