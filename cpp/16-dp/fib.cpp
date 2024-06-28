#include <iostream>
#include <vector>
using namespace std;

// memo
int fib(int n, vector<int> &memo) {
    if (n <= 1)
        return memo[n] = n;

    if (memo[n] != -1)
        return memo[n];
    else
        return memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
}

int tabulation(int n) {
    vector<int> dp(1000, 0);
    dp[1] = 1;
    for (int i = 2; i < 1000; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    vector<int> memo(1000, -1);
    cout << fib(3, memo) << '\n';
    cout << fib(5, memo) << '\n';
    cout << fib(7, memo) << '\n';
    cout << fib(8, memo) << '\n';

    // tabulation
    cout << tabulation(3) << '\n';
    cout << tabulation(5) << '\n';
    cout << tabulation(7) << '\n';
    cout << tabulation(8) << '\n';

    return 0;
}