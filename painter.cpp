#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int painters = 1;
    int boards = 0;

    for (int i = 0; i < n; i++) {
        if (boards + arr[i] <= mid) {
            boards += arr[i];
        }
        else {
            painters++;
            boards = arr[i];
        }
    }

    return painters <= m;
}

int painterPartition(vector<int>& arr, int n, int m) {
    int sum = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxi = max(maxi, arr[i]);
    }

    int st = maxi;
    int end = sum;
    int ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};

    int n = arr.size();
    int m = 2;

    cout << painterPartition(arr, n, m);

    return 0;
}