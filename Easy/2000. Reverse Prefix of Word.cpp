// Problem Link : https://leetcode.com/problems/reverse-prefix-of-word/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	string reversePrefix(string word, char ch) {
		int n = word.length();
		int index = -1, i = 0;
		for (i = 0; i < n; ++i) {
			if (word[i] == ch) {
				index = i;
				break;
			}
		}
		if (i == n) return word;
		int s = 0, e = i;
		while (s <= e) {
			char c = word[s];
			word[s] = word[e];
			word[e] = c;
			s++; e--;
		}
		return word;
	}
};
