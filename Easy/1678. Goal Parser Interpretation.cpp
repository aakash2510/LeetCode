// Problem Link : https://leetcode.com/problems/goal-parser-interpretation/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	string interpret(string command) {
		int n = command.length();
		string ans = "";
		for (int i = 0; i < n; ++i) {
			if (command[i] == 'G') {
				ans += command[i];
			}
			else if (command[i] == '(' and command[i + 1] == ')') {
				ans += "o";
				i += 1;
			}
			else if (command[i] == '(' and command[i + 3] == ')') {
				ans += command[i + 1];
				ans += command[i + 2];
				i += 3;
			}
		}
		return ans;
	}
};
