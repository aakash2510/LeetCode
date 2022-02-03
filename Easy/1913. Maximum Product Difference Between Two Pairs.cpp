// Problem Link : https://leetcode.com/problems/maximum-product-difference-between-two-pairs/

// Time : O(NlogN)
// Space : O(1)

class Solution {
public:
	int maxProductDifference(vector<int>& nums) {
		int n = nums.size();
		sort(nums.begin(), nums.end());
		int maxDiff = nums[n - 1] * nums[n - 2] - nums[0] * nums[1];
		return maxDiff;
	}
};
