// Problem Link : https://leetcode.com/problems/valid-anagram/

// Time : O(N)
// Space : O(C)

class Solution {
public:
	bool isAnagram(string s, string t) {
		int m = s.length(), n = t.length(), count = 0;
		if (m != n) return false;
		int freq[26] = {0};
		for (int i = 0; i < m; ++i) {
			freq[s[i] - 'a']++;
		}
		for (int j = 0; j < n; ++j) {
			freq[t[j] - 'a']--;
		}
		for (int i = 0; i < 26; ++i) {
			if (freq[i] == 0) count++;
		}
		if (count == 26) return true;
		return false;
	}
};
