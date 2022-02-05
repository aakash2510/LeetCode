// Problem Link : https://leetcode.com/problems/keep-multiplying-found-values-by-two/

// Time : O(N^2)
// Space : O(1)

class Solution {
public:
	int findFinalValue(vector<int>& nums, int original) {
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] == original) {
				original *= 2;
				i = -1;
			}
		}
		return original;
	}
};
