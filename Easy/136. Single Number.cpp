// Problem Link : https://leetcode.com/problems/single-number/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int XOR = 0, n = nums.size();
		for (int i = 0; i < n; i++) {
			XOR ^= nums[i];
		}
		return XOR;
	}
};
