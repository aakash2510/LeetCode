// Problem Link : https://leetcode.com/problems/jewels-and-stones/

// Approach : 1
// Time : O(N^2)
// Space : O(1)

class Solution {
public:
	int numJewelsInStones(string jewels, string stones) {
		int count = 0;
		for (int i = 0; i < jewels.length(); ++i) {
			for (int j = 0; j < stones.length(); ++j) {
				if (jewels[i] == stones[j]) count++;
			}
		}
		return count;
	}
};

// Approach : 2
// Time : O(N)
// Space : O(N)

class Solution {
public:
	int numJewelsInStones(string jewels, string stones) {
		unordered_set<char> s(jewels.begin(), jewels.end());
		int ans = 0;
		for (char c : stones) ans += s.count(c);
		return ans;
	}
};
