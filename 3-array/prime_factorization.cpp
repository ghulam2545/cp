#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// O(sqrt(n))
vector<uint64_t> solve(uint64_t num) {
    vector<uint64_t> ans;

    for (int d = 2; d * d <= num; ++d) {
        while (num % d == 0) {
            ans.push_back(d);
            num /= d;
        }
    }

    if (num > 1)
        ans.push_back(num);

    return ans;
}

int main() {
    uint64_t num1 = 315;
    uint64_t num2 = 3315;

    for (auto &e : solve(num1))
        cout << e << ' ';
    cout << '\n';
    for (auto &e : solve(num2))
        cout << e << ' ';

    return 0;
}