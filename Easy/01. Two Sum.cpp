// Problem Link : https://leetcode.com/problems/single-number/

// Approach : 1
// Time : O(N^2)
// Space : O(1)

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		int n = nums.size();
		vector<int> ans;
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (nums[i] + nums[j] == target)
				{
					ans.push_back(i);
					ans.push_back(j);
					break;
				}
			}
		}
		return ans;
	}
};

// Approach : 2
// Time: O(NlogN)
// Space: O(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target)
    {
        vector<vector<int>> v;
        int N = A.size(), L = 0, R = N - 1;
        for (int i = 0; i < N; ++i) v.push_back({ A[i], i });
        sort(begin(v), end(v));
        while (L < R)
        {
            int sum = v[L][0] + v[R][0];
            if (sum == target) return { v[L][1], v[R][1] };
            if (sum < target) ++L;
            else --R;
        }
        return {};
    }
};

// Approach : 3
// Time: O(N)
// Space: O(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int n = nums.size();
        vector<int> v;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x = target - nums[i];
            if (mp.find(x) == mp.end()) 
	    {
                mp[nums[i]] = i;
            }
            else 
	    {
                v.push_back(mp[x]);
                v.push_back(i);
                break;
            }
        }
        return v;
    }
};
