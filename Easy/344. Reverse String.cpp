// Problem Link : https://leetcode.com/problems/reverse-string/

// Time : O(N)
// Space : O(1)
class Solution {
public:
	void reverseString(vector<char>& s) {
		int n = s.size();
		int start = 0, end = n - 1;
		while (start < end) {
			char temp = s[start];
			s[start] = s[end];
			s[end] = temp;
			start++; end--;
		}
		return;
	}
};
