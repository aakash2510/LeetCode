// Problem Link : https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

// Approach : 1
// Time : O(N)
// Space : O(1)

class Solution {
public:
	int finalValueAfterOperations(vector<string>& operations) {
		int n = operations.size(), x = 0;
		for (int i = 0; i < n; ++i) {
			if (operations[i] == "++X" or operations[i] == "X++") x++;
			else x--;
		}
		return x;
	}
};

// Approach : 2
// Time : O(N)
// Space : O(1)

class Solution {
public:
	int finalValueAfterOperations(vector<string>& operations) {
		int x = 0;
		for (auto &s : operations) {
			if (s[0] == '+' or s[1] == '+') ++x;
			else --x;
		}
		return x;
	}
};
