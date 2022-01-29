// Problem Link : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

// Time : O(N)
// Space : O(N)

class Solution {
public:
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
		int n = candies.size();
		vector<bool> answer(n, false);
		int greatestCandy = INT_MIN;
        
		for (int i = 0; i < n; ++i) {
			if (candies[i] >= greatestCandy) {
				greatestCandy = candies[i];
			}
		}

		for (int j = 0; j < n; ++j) {
			int currCandy = candies[j] + extraCandies ;
			if (currCandy >= greatestCandy) {
				answer[j] = true;
			}
		}
		return answer;
	}
};
