#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    cout << fib(3) << ' ' << fib(5) << '\n';
    cout << fib(10) << ' ' << fib(11) << '\n';

    return 0;
}