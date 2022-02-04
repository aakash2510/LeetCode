// Problem Link : https://leetcode.com/problems/find-first-palindromic-string-in-the-array/

// Approach : 1
// Time : O(NW)
// Space : O(W)

class Solution {
public:
	string firstPalindrome(vector<string>& words) {
		int n = words.size();
		string ans = "";
		for (int i = 0; i < n; ++i) {
			string temp = words[i];
			reverse(temp.begin(), temp.end());
			if (temp == words[i]) {
				ans = words[i];
				break;
			}
		}
		return ans;
	}
};

// Approach : 2
// Time : O(NW)
// Space : O(1)

class Solution {
	bool isPalindrome(string &s) {
		int n = s.length();
		int low = 0, high = n - 1;
		while (low <= high) {
			if (s[low] == s[high]) {
				low++;
				high--;
			}
			else {
				return false;
			}
		}
		return true;
	}
public:
	string firstPalindrome(vector<string>& words) {
		int m = words.size();
		for (int i = 0; i < m; ++i) {
			if (isPalindrome(words[i])) return words[i];
		}
		return "";
	}
};
