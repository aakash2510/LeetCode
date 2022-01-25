// Problem Link: https://leetcode.com/problems/valid-mountain-array/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	bool validMountainArray(vector<int>& arr) {
		int n = arr.size();
		if (n < 3) return false;
		int i, j;
		for (i = 0; i < n - 1; i++) {
			if (arr[i] < arr[i + 1]) continue;
			else break;
		}
		if (i == 0 or i == n - 1) return false;
		for (j = n - 1; j > i; j--) {
			if (arr[j] < arr[j - 1]) continue;
			else return false;
		}
		return true;
	}
};
