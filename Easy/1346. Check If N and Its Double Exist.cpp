// Problem Link : https://leetcode.com/problems/check-if-n-and-its-double-exist/

// Approach : 1
// Time: O(N^2)
// Space: O(1)

class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        bool flag = false;
        int n= arr.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(arr[i]==(2*arr[j]))
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }
        return flag;
    }
};

// Approach : 2
// Time: O(N)
// Space: O(N)

class Solution {
public:
    bool checkIfExist(vector<int>& arr)
    {
        int n = arr.size();
        unordered_set<int> s;
        for(int i=0;i<n;i++)
        {
            if(s.count(2*arr[i]) || (arr[i]%2==0 and s.count(arr[i]/2)))
            {
                return true;
            }
            s.insert(arr[i]);
        }
        return false;
    }
};
