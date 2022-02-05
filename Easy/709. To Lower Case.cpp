// Problem Link : https://leetcode.com/problems/to-lower-case/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	string toLowerCase(string s) {
		int n = s.length();
		for (int i = 0; i < n; ++i) {
			if (s[i] >= 65 and s[i] <= 90) s[i] = s[i] + 32;
		}
		return s;
	}
};
