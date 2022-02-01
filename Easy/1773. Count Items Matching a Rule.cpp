// Problem Link : https://leetcode.com/problems/count-items-matching-a-rule/

// Approach : 1
// Time : O(N)
// Space : O(1)

class Solution {
public:
	int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
		int count = 0;
		for (int i = 0; i < items.size(); ++i) {
			if (ruleKey == "type" and items[i][0] == ruleValue) {
				count++;
			}
			else if (ruleKey == "color" and items[i][1] == ruleValue) {
				count++;
			}
			else if (ruleKey == "name" and items[i][2] == ruleValue) {
				count++;
			}
		}
		return count;
	}
};

// Approach : 2
// Time : O(N)
// Space : O(1)

class Solution {
public:
	int countMatches(vector<vector<string>>& items , string ruleKey, string ruleValue) {
		int ans = 0, i = ruleKey == "type" ? 0 : (ruleKey == "color" ? 1 : 2);
		for (auto &x : items) {
			ans += x[i] == ruleValue;
		}
		return ans;
	}
};
