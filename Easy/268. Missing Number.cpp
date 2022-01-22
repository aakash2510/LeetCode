// Problem Link : https://leetcode.com/problems/missing-number/

// Approach : 1 [Sum of Arithmetic Sequence]
// Time: O(N)
// Space: O(1)

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int sum = 0, n = nums.size();
		for (int i = 0; i < n; i++) {
			sum += nums[i];
		}
		int ans = n * (n + 1) / 2 - sum;
		return ans;
	}
};

// Approach : 2 [XOR]
// Time: O(N)
// Space: O(1)

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int ans = 0, n = nums.size();
		for (int i = 0; i < n; i++) {
			ans ^= nums[i] ^ (i + 1);
		}
		return ans;
	}
};
