// Problem Link : https://leetcode.com/problems/reverse-integer/

// Time: O(NlogN)
// Space: O(1)

class Solution {
public:
	int reverse(int x) {
		long long int reverse = 0;
		while (x != 0) {
			reverse = (reverse * 10) + (x % 10);
			x /= 10;
		}
		if (reverse > INT_MAX or reverse < INT_MIN) return 0;
		return reverse;
	}
};
