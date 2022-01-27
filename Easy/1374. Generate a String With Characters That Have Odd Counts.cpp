// Problem Link : https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	string generateTheString(int n) {
		if (n == 1) return "a";
		else if (n == 2) return "ab";
		string ans = "";
		if (n % 2 == 0) {
			for (int i = 0; i < n - 1; ++i) ans += "a";
			ans += "b";
		}
		else {
			for (int i = 0; i < n; ++i) ans += "a";
		}
		return ans;
	}
};
