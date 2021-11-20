// Problem Link : https://leetcode.com/problems/remove-element/

// Approach : 1
// Time : O(N)
// Space : O(1)

class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        int j = 0, n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] != val) nums[j++] = nums[i];
        }
        return j;
    }
};
