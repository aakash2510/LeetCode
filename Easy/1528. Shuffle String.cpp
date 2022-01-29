// Problem Link : https://leetcode.com/problems/shuffle-string/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	string restoreString(string s, vector<int>& indices) {
		int n = indices.size();
		string ans = s;

		for (int i = 0; i < n; ++i) {
			ans[indices[i]] = s[i];
		}
		return ans;
	}
};
