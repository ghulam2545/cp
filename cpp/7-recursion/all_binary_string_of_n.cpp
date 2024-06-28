#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
/*
 generate all binary sting of size n
*/
void solve(int n, int idx, vector<string> &ans, string s) {
    if (idx > n) {
        ans.push_back(s);
        return;
    }

    s.push_back('0');
    solve(n, idx + 1, ans, s);
    s.pop_back();
    s.push_back('1');
    solve(n, idx + 1, ans, s);
}

int main() {
    vector<string> ans;
    string s = "";

    solve(3, 0, ans, s);

    cout << ans.size(, memo) << '\n';
    for (auto &e : ans)
        cout << e << '\n';

    return 0;
}