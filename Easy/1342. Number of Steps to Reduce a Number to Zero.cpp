// Problem Link : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

// Time : O(logN)
// Space : O(1)

class Solution {
public:
	int numberOfSteps(int num) {
		int steps = 0;
		while (num != 0) {
			if (num & 1) num -= 1;
			else num >>= 1;
			steps++;
		}
		return steps;
	}
};
