
#include <iostream>
using namespace std;

double myPow(double x, int n) {
    long long binaryForm = n;

    if (binaryForm < 0) {
        x = 1.0 / x;
        binaryForm = -binaryForm;
    }

    double ans = 1.0;

    while (binaryForm > 0) {
        if (binaryForm % 2 != 0) {
            ans *= x;
        }

        x *= x;
        binaryForm /= 2;
    }

    return ans;
}

int main() {
    double x = 2.0;
    int n = 10;

    cout << myPow(x, n) << endl;

    return 0;
}
