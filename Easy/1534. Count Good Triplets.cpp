// Problem Link : https://leetcode.com/problems/count-good-triplets/

// Approach : 1
// Time : O(N^3)
// Space : O(1)

class Solution {
public:
	int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
		int n = arr.size();
		int goodTriplets = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				for (int k = 0; k < n; ++k) {
					if (i < j and j < k and i < k) {
						if (abs(arr[i] - arr[j]) <= a and abs(arr[j] - arr[k]) <= b and abs(arr[i] - arr[k]) <= c) goodTriplets++;
					}
				}
			}
		}
		return goodTriplets;
	}
};

// Approach : 2
// Time : O(N^3)
// Space : O(1)

class Solution {
public:
	int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
		int n = arr.size();
		int goodTriplets = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				for (int k = j + 1; k < n; ++k) {
					if (abs(arr[i] - arr[j]) <= a and abs(arr[j] - arr[k]) <= b and abs(arr[i] - arr[k]) <= c) ++goodTriplets;
				}
			}
		}
		return goodTriplets;
	}
};
