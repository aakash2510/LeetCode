// Problem Link : https://leetcode.com/problems/truncate-sentence/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	string truncateSentence(string s, int k) {
		int n = s.length(), countSpace = 0;
		string ans = "";
		for (int i = 0; i < n; i++) {
			if (s[i] == ' ') {
				countSpace++;
			}
			if (countSpace == k) break;
			ans += s[i];
		}
		return ans;
	}
};
