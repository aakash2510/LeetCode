// Problem Link : https://leetcode.com/problems/decompress-run-length-encoded-list/

// Time : O(N) where N is the length of the output array.
// Space : O(1)

class Solution {
public:
	vector<int> decompressRLElist(vector<int>& nums) {
		int n = nums.size();
		vector<int> ans;
		for (int i = 0; i < n; i += 2) {
			while (nums[i] != 0) {
				ans.push_back(nums[i + 1]);
				nums[i]--;
			}
		}
		return ans;
	}
};
