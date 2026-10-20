#include <iostream>
using namespace std;

int main () {
    int r;
    int c = 0;
    cin >> r;


    for (int i = 0; i < r; i++) {
        int p, q;
        cin >> p >> q;

        if ((q-p) >= 2) {
            c++;
        }
    }
    cout << c;
    return 0;
}