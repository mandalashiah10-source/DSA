
#include <iostream>
using namespace std;

int main() {
    int a[] = {0, 3, 4, 8, 9, 5, 2, 1};

    int n = sizeof(a) / sizeof(a[0]);

    int st = 1;
    int end = n - 2;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (a[mid - 1] < a[mid] && a[mid] > a[mid + 1]) {
            cout << mid << endl;
            break;
        }
        else if (a[mid - 1] < a[mid]) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return 0;
}
