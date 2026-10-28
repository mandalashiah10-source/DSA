#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int st = 0;
    int end = n - 1;
    int target = 12; // Defined outside the loop

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (target > arr[mid]) {
            st = mid + 1;
        } else if (target < arr[mid]) {
            end = mid - 1;
        } else {
            cout << mid << endl;
            return mid; // Exit after printing/finding the element
        }
    }

    return -1; // Target not found
}