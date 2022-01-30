// Problem Link : https://leetcode.com/problems/shuffle-the-array/

// Approach : 1
// Time : O(N)
// Space : O(N)

class Solution {
public:
	vector<int> shuffle(vector<int>& nums, int n) {
		vector<int> ans(2 * n);
		int j = 0, k = n;
		for (int i = 0; i < 2 * n; ++i) {
			if (i % 2 == 0) {
				ans[i] = nums[j];
				j++;
			}
			else {
				ans[i] = nums[k];
				k++;
			}
		}
		return ans;
	}
};

// Approach : 2
// Time : O(N)
// Space : O(N)

class Solution {
public:
	vector<int> shuffle(vector<int>& nums, int n) {
		vector<int> ans(2 * n);
		for (int i = 0; i < 2 * n; ++i) {
			if (i < n) ans[2 * i] = nums[i];
			else ans[2 * (i - n) + 1] = nums[i];
		}
		return ans;
	}
};

// Approach : 3
// Time : O(N)
// Space : O(N)

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a, b, ans;
        for (int i = 0; i < 2 * n; ++i) {
            if (i < n) a.push_back(nums[i]);
            else b.push_back(nums[i]);
        }
        for (int i = 0; i < n; ++i) {
            ans.push_back(a[i]);
            ans.push_back(b[i]);
        }
        return ans;
    }
};
