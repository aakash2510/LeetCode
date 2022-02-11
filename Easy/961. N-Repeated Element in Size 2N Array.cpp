// Problem Link : https://leetcode.com/problems/n-repeated-element-in-size-2n-array

// Time : O(N)
// Space : O(N)

class Solution {
public:
	int repeatedNTimes(vector<int>& nums) {
		int n = nums.size(), ans = 0;
		unordered_map<int, int> mp;
		for (int i = 0; i < n; ++i) {
			mp[nums[i]]++;
		}
		for (auto &x : mp) {
			if (x.second == n / 2) {
				ans = x.first;
				break;
			}
		}
		return ans;
	}
};
