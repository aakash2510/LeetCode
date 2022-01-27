// Problem Link : https://leetcode.com/problems/check-if-the-sentence-is-pangram/

// Time : O(N)
// Space : O(1) 

class Solution {
public:
	bool checkIfPangram(string sentence) {
		int n = sentence.length();
		int freq[26] = {0};
		for (int i = 0; i < n; ++i) freq[sentence[i] - 'a']++;
		int count = 0;
		for (int i = 0; i < 26; ++i) {
			if (freq[i] >= 1) count++;
		}
		if (count == 26) return true;
		return false;
	}
};
