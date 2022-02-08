// Problem Link : https://leetcode.com/problems/add-digits/

// Approach : 1 [Brute Force]
// Time : O(logN)
// Space : O(1)

class Solution {
public:
	int addDigits(int num) {
		int sum ;
		while (true) {
			sum = 0;
			while (num != 0) {
				sum += num % 10;
				num /= 10;
			}
			num = sum;
			if (num < 10) break;
		}
		return num;
	}
};

// Approach : 2 [Optimised]
// Time : O(1)
// Space : O(1)

class Solution {
public:
	int addDigits(int num) {
		if (num == 0) return 0;
		if (num % 9 == 0) return 9;
		return num % 9;
	}
};
