// Problem Link : https://leetcode.com/problems/valid-palindrome/

// Time: O(N)
// Space: O(1)

class Solution {
public:
	bool isPalindrome(string s) {
		string ans = "";
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] >= 65 and s[i] <= 90) ans += s[i] + 32;
			else if (s[i] >= 97 and s[i] <= 122) ans += s[i];
			else if (s[i] >= 48 and s[i] <= 57) ans += s[i];
		}
		int m = ans.length();
		int start = 0, end = m - 1;
		while (start <= end) {
			if (ans[start] == ans[end]) {
				start++;
				end--;
			}
			else {
				return false;
			}
		}
		return true;
	}
};
