// Problem Link : https://leetcode.com/problems/decode-xored-array/

// Time : O(N)
// Space : O(1)

class Solution {
public:
	vector<int> decode(vector<int>& encoded, int first) {
		int n = encoded.size();
		vector<int> ans(n + 1);
		ans[0] = first;
		for (int i = 0; i < n; ++i) {
			ans[i + 1] = encoded[i] ^ ans[i];
		}
		return ans;
	}
};
