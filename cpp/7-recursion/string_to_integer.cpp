#include <climits>
#include <iostream>
using namespace std;

class Solution {
  public:
    bool digit(char ch) {
        char chars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        for (auto &e : chars) {
            if (ch == e)
                return true;
        }

        return false;
    }

    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        for (; i < n; ++i) {
            if (s[i] != ' ')
                break;
        }

        int sign = 1;
        if (s[i] == '-') {
            sign = -1;
            ++i;
        } else if (s[i] == '+')
            ++i;

        long ans = 0;
        for (; i < n; ++i) {
            if (digit(s[i])) {
                ans = (ans * 10) + (s[i] - '0');

                if (sign == 1 && ans > INT_MAX)
                    return INT_MAX;
                if (sign == -1 && ans * sign < INT_MIN)
                    return INT_MIN;
            } else
                break;
        }

        cout << ans << '\n';

        return (int)(sign * ans);
    }
};