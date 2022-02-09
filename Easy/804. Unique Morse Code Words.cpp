// Problem Link : https://leetcode.com/problems/unique-morse-code-words/

// Time : O(N)
// Space : O(N)

class Solution {
public:
	int uniqueMorseRepresentations(vector<string>& words) {
		int n = words.size(), transfromations = 0;
		unordered_set<string> s;
		string arr[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-",
		                ".--", "-..-", "-.--", "--.."};
		for (int i = 0; i < n; ++i) {
			string str = "";
			for (int j = 0; j < words[i].size(); ++j) {
				str += arr[words[i][j] - 'a'];
			}
			s.insert(str);
		}
		return s.size();
	}
};
