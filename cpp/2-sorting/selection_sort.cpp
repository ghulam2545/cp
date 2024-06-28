#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {

        int idx = 0;
        int val = INT32_MAX;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < val) {
                val = arr[j];
                idx = j;
            }
        }
        swap(arr[i], arr[idx]);
    }

    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
}

int main() {

    int arr[] = {7, 4, 5, 4, 7, 8, 7, 2, 3, 2, 0, 1, 2};

    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);

    return 0;
}