// Problem Link : https://leetcode.com/problems/single-number/
// Author : github.com/lzl124631x
// Time : O(N)
// Space : O(1)

class Solution {
public:
	int singleNumber(vector<int>& nums)
	{
		int n = nums.size();
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			ans ^= nums[i];
		}
		return ans;
	}
};
