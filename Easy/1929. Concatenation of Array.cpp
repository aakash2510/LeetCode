// Problem Link : https://leetcode.com/problems/concatenation-of-array/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	vector<int> getConcatenation(vector<int>& nums) {
		int n = nums.size();
		vector<int> ans(2 * n);
		for (int i = 0; i < n; i++) {
			ans[i] = nums[i];
			ans[i + n] = nums[i];
		}
		return ans;
	}
};
