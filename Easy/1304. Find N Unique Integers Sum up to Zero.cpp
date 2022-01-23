// Problem Link : https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

// Approach : 1
// Time : O(N)
// Space : O(1)

class Solution {
public:
	vector<int> sumZero(int n) {
		vector<int> ans;
		for (int i = -n / 2; i <= n / 2; i++) {
			ans.push_back(i);
		}
		auto it = ans.begin() + n / 2;
		if (n % 2 == 0) {
			ans.erase(it);
		}
		return ans;
	}
};

// Approach : 2
// Time : O(N)
// Space : O(1)

class Solution {
public:
	vector<int> sumZero(int n) {
		vector<int> ans;
		if (n % 2) ans.push_back(0), --n;
		for (int i = 1; i <= n / 2; ++i) {
			ans.push_back(i);
			ans.push_back(-i);
		}
		return ans;
	}
};
