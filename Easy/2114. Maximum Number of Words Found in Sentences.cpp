// Problem Link : https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

// Time: O(N^2)
// Space: O(1)

class Solution {
public:
	int mostWordsFound(vector<string>& sentences) {
		int n = sentences.size(), ans = 0;
		for (int i = 0; i < n; ++i) {
			string s = sentences[i];
			int spaceCount = 0;
			for (int j = 0; j < s.length(); j++) {
				if (s[j] == ' ') spaceCount++;
			}
			ans = max(ans, spaceCount + 1);
		}
		return ans;
	}
};
