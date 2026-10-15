
#include <iostream>
using namespace std;

int powN(double a, int n) {
    double result = 1;

    for (int i = 0; i < n; i++) {
        result = result * a;
    }

    return result;
}

int main() {
    double a = 2.1;
    int n = 3;

    cout << powN(a, n) << endl;

    return 0;
}

