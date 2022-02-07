// Problem Link : https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/

// Time : O(N)
// Space : O(C) where C is the range of the characters

class Solution {
public:
	bool areOccurrencesEqual(string s) {
		int n = s.length();
		int freq[26] = {0};
		for (int i = 0; i < n; ++i) {
			freq[s[i] - 'a']++;
		}
		int countZero = 0, count = 0, countSame = 0;
		for (int i = 0; i < 26; ++i) {
			if (freq[i] == 0) countZero++;
			else count++;
		}
		int f = n / count;
		for (auto &x : freq) {
			if (x == f) countSame++;
		}
		if (countZero + countSame == 26) return true;
		return false;
	}
};
