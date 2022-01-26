// Problem Link : https://leetcode.com/problems/determine-color-of-a-chessboard-square/

// Approach : 1
// Time : O(1)
// Space : O(1)

class Solution {
public:
	bool squareIsWhite(string coordinates) {
		char ch = coordinates[0];
		int x = coordinates[1] - '0';
		if (x % 2 != 0) {
			if (ch == 'a' or ch == 'c' or ch == 'e' or ch == 'g') {
				return false;
			}
			else return true;
		}
		else {
			if (ch == 'a' or ch == 'c' or ch == 'e' or ch == 'g') {
				return true;
			}
			else return false;
		}
	}
};

// Approach : 2
// Time : O(1)
// Space : O(1)

class Solution {
public:
	bool squareIsWhite(string coordinates) {
		return (coordinates[0] - 'a') % 2 == (coordinates[1] - '0') % 2;
	}
};
