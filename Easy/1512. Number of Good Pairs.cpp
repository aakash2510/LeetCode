// Problem Link : https://leetcode.com/problems/number-of-good-pairs/

// Approach : 1 [Brute Force]
// Time : O(N^2)
// Space : O(1)

class Solution {
public:
	int numIdenticalPairs(vector<int>& nums) {
		int n = nums.size(), count = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (nums[i] == nums[j]) count++;
			}
		}
		return count;
	}
};

// Approach : 2 [Sorting]
// Time : O(NlogN)
// Space : O(1)

class Solution {
public:
	int numIdenticalPairs(vector<int>& nums) {
		int n = nums.size(), count = 0;
		sort(nums.begin(), nums.end());
		int i = 0;
		for (int j = 1; j < n; j++) {
			if (nums[i] == nums[j]) count += j - i;
			else i = j;
		}
		return count;
	}
};

// Approach : 3 [Count]
// Time : O(N)
// Space : O(N)

class Solution {
public:
	int numIdenticalPairs(vector<int>& nums) {
		int count = 0;
		int freq[101] = {0};
		for (int num : nums) count += freq[num]++;
		return count;
	}
};
