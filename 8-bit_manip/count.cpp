#include <bitset>
#include <iostream>
using namespace std;

int count_set(int num) {
    int count = 0;
    while (num) {
        if (num & 1)
            ++count;
        num >>= 1;
    }

    return count;
}
int count_unset(int num) { return 32 - count_set(num); }

int main() {

    int num = 12; // 0000 0000 0000 0000 0000 0000 0000 1100

    cout << count_set(num, memo) << ' ' << count_unset(num);

    return 0;
}
