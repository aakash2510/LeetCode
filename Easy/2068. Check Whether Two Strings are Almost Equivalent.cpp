// Problem Link : https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/

// Time : O(N+M)
// Space : O(1)

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        int f[26] = {0};
        for(int i=0;i<n;i++){
            f[word1[i]-'a']++;
        }
        for(int j=0;j<m;j++){
            f[word2[j]-'a']--;
        }
        bool ans = false;
        for(int i=0;i<26;i++){
            if(abs(f[i])>3){
                ans = false;
                break;
            }
            else{
                ans = true;
            }
        }
        return ans;
    }
};
