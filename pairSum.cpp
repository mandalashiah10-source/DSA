#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 34, 5, 6, 7, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << i << ", " << j << endl;
                return 0;
            }
        }
    }

    cout << "Pair not found" << endl;
    return 0;
}