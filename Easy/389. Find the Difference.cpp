// Problem Link : https://leetcode.com/problems/find-the-difference/

// Approach : 1
// Time : O(N)
// Space : O(1)

class Solution {
public:
	char findTheDifference(string s, string t) {
		int n = s.length();
		char XOR ;
		for (int i = 0; i < n; ++i) {
			XOR ^= s[i];
			XOR ^= t[i];
		}
		XOR ^= t[n];
		return XOR;
	}
};

// Approach : 2
// Time : O(N)
// Space : O(1)

class Solution {
public:
    char findTheDifference(string s, string t) {
        int cnt[26] = {};
        for (char c : s) cnt[c - 'a']++;
        for (char c : t) {
            if (--cnt[c - 'a'] < 0) return c;
        }
        return 0;
    }
};
