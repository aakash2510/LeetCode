// Problem Link : https://leetcode.com/problems/two-furthest-houses-with-different-colors/

// Approach : 1
// Time: O(N^2)
// Space: O(1)

class Solution {
public:
    int maxDistance(vector<int>& colors) 
    {
        int n = colors.size();
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x = colors[i];
            for (int j = 0; j < n; j++)
            {
                if (x == colors[j])
                {
                    continue;
                }
                else
                {
                    ans = max(ans, i - j);
                }
            }
        }
        return ans;
    }
};

// Approach : 2
// Time: O(N)
// Space: O(1)

// Find the last house with different color of the fisrt house.
// Find the first house with different color of the last house.
// Return the max distance of these two options.

class Solution {
public:
    int maxDistance(vector<int>& colors)
    {
        int n = colors.size();
        int i = 0, j = n - 1;
        while (colors[j] == colors[0]) j--;
        while (colors[i] == colors[n - 1]) i++;
        return max(j, n - i - 1);
    }
};
