// Problem Link : https://leetcode.com/problems/a-number-after-a-double-reversal/

// Approach : 1
//=============
// Time : O(logN)
// Space : O(1)

class Solution {
public:
	bool isSameAfterReversals(int num) {
		int reversed1 = 0, reversed2 = 0, temp = num;
		while (num != 0) {
			reversed1 = reversed1 * 10 + num % 10;
			num /= 10;
		}
		num = temp;
		while (reversed1 != 0) {
			reversed2 = reversed2 * 10 + reversed1 % 10;
			reversed1 /= 10;
		}
		return (reversed2 == num);
	}
};

// Approach : 2
//=============
// Time : O(1)
// Space : O(1)

class Solution {
public:
	bool isSameAfterReversals(int num) {
		return !num || num % 10;
	}
};
