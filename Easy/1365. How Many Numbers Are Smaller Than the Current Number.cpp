// Problem Link : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/submissions/

// Approach : 1
// Time : O(N^2)
// Space : O(1)

class Solution {
public:
	vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
		int n = nums.size();
		vector<int> ans;
		for (int i = 0; i < n; ++i) {
			int count = 0;
			for (int j = 0; j < n; ++j) {
				if (j != i and nums[j] < nums[i]) {
					count++;
				}
			}
			ans.push_back(count);
		}
		return ans;
	}
};

// Approach : 2
// Time : O(N)
// Space : O(1)

class Solution {
public:
	vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
		int n = nums.size();
		vector<int> ans;
		int freq[101] = {0};
		for (int i = 0; i < n; ++i) {
			freq[nums[i]]++;
		}
		for (int i = 1; i < 101; ++i) {
			freq[i] += freq[i - 1];
		}
		for (int i = 0; i < n; ++i) {
			if (nums[i] - 1 < 0) ans.push_back(0);
			else ans.push_back(freq[nums[i] - 1]);
		}
		return ans;
	}
};
