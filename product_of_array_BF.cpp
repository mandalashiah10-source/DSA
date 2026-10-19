#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans[4];

    for (int i = 0; i < n; i++) {
        int product = 1;

        for (int j = 0; j < n; j++) {
            if (i != j) {
                product *= arr[j];
            }
        }

        ans[i] = product;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}