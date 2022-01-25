// Problem Link : https://leetcode.com/problems/detect-capital/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	bool detectCapitalUse(string word) {
		int n = word.length();
		int countUpper = 0, countLower = 0, countFirst = 0;
		for (int i = 0; i < n; i++) {
			if (word[i] >= 65 and word[i] <= 90) countUpper++;
			if (word[i] >= 97 and word[i] <= 122) countLower++;
		}
		if (countUpper == n or countLower == n) return true;
		if (word[0] >= 65 and word[0] <= 90) {
			countFirst++;
		}
		if (countFirst + countLower == n) return true;
		return false;
	}
};
