#include <iostream>
using namespace std;

int main () {
    int k, n, w;
    cin >> k >> n >> w;
    int m = 0;

    for (int i = 0; i < w; i ++) {
        m = m + (i + 1) * k;
    }
    if (m > n) {
    n = m - n;
    cout << n;
    } else {
    cout << 0;
    }
}