// Problem Link : https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

// Time : O(logN)
// Space : O(1)

class Solution {
public:
	int subtractProductAndSum(int n) {
		int product = 1, sum = 0;
		while (n != 0) {
			int lastDigit = n % 10;
			product *= lastDigit;
			sum += lastDigit;
			n /= 10;
		}
		return (product - sum);
	}
};
