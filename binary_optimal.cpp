#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int st = 0;
    int end = n - 1; 

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (target > arr[mid]) {
            st = mid + 1;
        } else if (target < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }
    return -1; 
}

int main() {
   
    int arr[] = {1, 2, 3, 4, 5, 5, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 67;

    int foundIndex = binarySearch(arr, n, target);

    if (foundIndex != -1) {
        cout << "Target found at index: " << foundIndex << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}