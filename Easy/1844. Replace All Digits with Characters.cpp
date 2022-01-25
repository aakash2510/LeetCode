// Problem Link : https://leetcode.com/problems/replace-all-digits-with-characters/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	string replaceDigits(string s) {
		int n = s.length();
		for (int i = 0; i < n; i++) {
			if (s[i] >= 97 and s[i] <= 122) continue;
			else s[i] = s[i - 1] + s[i] - '0';
		}
		return s;
	}
};
