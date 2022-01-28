// Problem Link : https://leetcode.com/problems/richest-customer-wealth/

// Time : O(M*N)
// Space : O(1)

class Solution {
public:
	int maximumWealth(vector<vector<int>>& accounts) {
		int n = accounts.size();
		int maxWealth = INT_MIN;
		for (int i = 0; i < n; ++i) {
			int currWealth = 0;
			for (int j = 0; j < accounts[i].size(); j++) {
				currWealth += accounts[i][j];
			}
			maxWealth = max(currWealth, maxWealth);
		}
		return maxWealth;
	}
};
