// Problem Link : https://leetcode.com/problems/palindrome-number/

// Time: O(N)
// Space: O(1)

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) return false;
		long long int temp = x, reverse = 0;
		while (x != 0) {
			reverse = reverse * 10 + x % 10;
			x /= 10;
		}
		return (reverse == temp);
	}
};
