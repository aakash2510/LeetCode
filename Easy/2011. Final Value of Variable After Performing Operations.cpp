// Problem Link : https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

// Approach : 1
// Time: O(N)
// Space: O(1)

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations)
    {
        int x = 0;
        int n = operations.size();
        for (int i = 0; i < n; i++)
        {
            if (operations[i] == "--X" || operations[i] == "X--")
            {
                x--;
            }
            else {
                x++;
            }
        }
        return x;
    }
};

// Approach : 2
// Time: O(N)
// Space: O(1)

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations)
    {
        int x = 0;
        for (auto &s : operations) 
        {
            if (s[0] == '+' || s[1] == '+') ++x;
            else --x;
        }
        return x;
    }
};
