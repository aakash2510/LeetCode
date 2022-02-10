// Problem Link : https://leetcode.com/problems/self-dividing-numbers/

// Time : O(ND) where N = right - left + 1, D = digit count of right.
// Space : O(1)

class Solution {
	bool selfDividing(int n) {
		int temp = n;
		while (n != 0) {
			int r = n % 10;
			if (r == 0) return false;
			if (r != 0 and temp % r != 0) return false;
			n /= 10;
		}
		return true;
	}
public:
	vector<int> selfDividingNumbers(int left, int right) {
		vector<int> ans;
		for (int i = left; i <= right; ++i) {
			if (selfDividing(i)) ans.push_back(i);
		}
		return ans;
	}
};
