#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int k = 2;

    int st = 0, end = 0;

    for(int i = 0; i < n; i++) {
        st = max(st, arr[i]);
        end += arr[i];
    }

    int ans = -1;

    while(st <= end) {
        int mid = st + (end - st) / 2;

        int painters = 1;
        int time = 0;

        for(int i = 0; i < n; i++) {
            if(time + arr[i] <= mid) {
                time += arr[i];
            }
            else {
                painters++;
                time = arr[i];
            }
        }

        if(painters <= k) {
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }

    cout << ans;

    return 0;
}