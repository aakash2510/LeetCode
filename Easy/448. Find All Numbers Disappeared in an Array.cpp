// OJ: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

// Approach : 1
// Time : O(N)
// Space : O(N)

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        int n = nums.size();
        unordered_set<int> s;

        for (int i = 0; i < n; i++)
        {
            s.insert(nums[i]);
        }
        vector<int> res;
        for (int j = 0; j < n; j++)
        {
            if (s.count(j + 1))
            {
                continue;
            }
            else
            {
                res.push_back(j + 1);
            }
        }
        return res;
    }
};

// Approach : 2
// Time : O(N)
// Space : O(1)

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            while (nums[nums[i] - 1] != nums[i])
            {
                swap(nums[nums[i] - 1], nums[i]);
            }
        }
        vector<int> res;
        for (int i = 0; i < n; ++i) {
            if (nums[i] != i + 1)
            {
                res.push_back(i + 1);
            }
        }
        return res;
    }
};
