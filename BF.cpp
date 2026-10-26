#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Indices: " << i << " " << j << endl;
                cout << "Elements: " << arr[i]
                     << " " << arr[j] << endl;
                return 0;
            }
        }
    }

    cout << "No pair found" << endl;
    return 0;
}