// Problem Link : https://leetcode.com/contest/weekly-contest-268/problems/watering-plants/

// Approach : 1
// Time: O(N)
// Space: O(1)

// When we can water A[i], consume it water -= A[i] and increment i.
// If we haven't reached the last plant, add 2 * i to the answer; otherwise, add i.
// Refill water. Go back to step 1 if i < N.

class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity)
    {
        int stepsCount = 0;
        int n = plants.size();
        int currCapacity = capacity;
        for (int i = 0; i < n; i++)
        {
            if (plants[i] > currCapacity)
            {
                currCapacity = capacity;
                stepsCount += (2 * i + 1);
            }
            else
            {
                stepsCount += 1;
            }
            currCapacity -= plants[i];
        }
        return stepsCount;
    }
};
