// Problem Link : https://leetcode.com/contest/weekly-contest-269/problems/find-target-indices-after-sorting-array/

// Approach : 1
// Time : O(NlogN)
// Space : O(1) Extra Space

class Solution {
public:
	vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
		vector<int> ans;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < n; ++i) {
			if (nums[i] == target) ans.push_back(i);
		}
		return ans;
	}
};

// Approach : 2
// Time : O(N)
// Space : O(1)

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target)
    {
        int n = nums.size();
        vector<int> res;
        int count = 0, rank = 0;
        for (int i = 0; i < n; i++)
        {
            count += (nums[i] == target);
            rank += (nums[i] < target);
        }
        while (count--)
            res.push_back(rank++);
        return res;
    }
};
