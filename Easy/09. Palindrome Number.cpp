// Problem Link : https://leetcode.com/problems/palindrome-number/

// Approach : 1
// Time: O(N)
// Space: O(1)

class Solution {
public:
    bool isPalindrome(int x)
    {
        if (x < 0) return false;
        long long y = x, z = 0;
        while (x != 0)
        {
            z = z * 10 + x % 10;
            x /= 10;
        }
        return (y == z);
    }
};
