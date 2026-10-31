#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 1, 2, 3, 3, 4, 4, 5, 5};
    int n = sizeof(a) / sizeof(a[0]);

    int ansIndex = -1;

    // Check edge cases
    if (n == 1) {
        ansIndex = 0;
    } else if (a[0] != a[1]) {
        ansIndex = 0;
    } else if (a[n - 1] != a[n - 2]) {
        ansIndex = n - 1;
    } else {
        // Binary search on standard raw array
        int st = 1;
        int end = n - 2;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (a[mid] != a[mid - 1] && a[mid] != a[mid + 1]) {
                ansIndex = mid;
                break;
            }

            if (mid % 2 == 0) {
                if (a[mid - 1] == a[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {
                if (a[mid - 1] == a[mid]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
    }

    if (ansIndex != -1) {
        cout << "Index: " << ansIndex << endl;
        cout << "Value: " << a[ansIndex] << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}