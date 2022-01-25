// Problem Link : https://leetcode.com/problems/create-target-array-in-the-given-order/

// Time : O(N^2)
// Space : O(1)

class Solution {
public:
	vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
		int n = nums.size();
		vector<int> target;
		for (int i = 0; i < n; ++i) {
			target.insert(target.begin() + index[i], nums[i]);
		}
		return target;
	}
};
