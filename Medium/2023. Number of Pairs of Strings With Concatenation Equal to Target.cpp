// Problem Link : https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/

// Approach : 1
// Time : O(NW) where N is the size of vector nums and W is the length of string target 
// Space : O(1) 

class Solution {
public:
	int numOfPairs(vector<string>& nums, string target) {
		int n = nums.size();
		int count = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((nums[i] + nums[j] == target) and i != j) {
					count++;
				}
			}
		}
		return count;
	}
};
