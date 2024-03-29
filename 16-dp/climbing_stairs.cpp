#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int climbStairs(int n) {
        vector<int> dp(46, 1);
        for (int i = 2; i < 46; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};

int main() { return 0; }