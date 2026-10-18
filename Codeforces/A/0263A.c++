#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main () {
    vector <vector <int>> arr;
    int crr = 0, crc = 0;
    bool a = 0;
    int o = 0;

    for (int i = 0; i < 5; i++) {
        vector <int> temp;
        int val;
        for (int j = 0; j < 5; j++) {
            cin >> val;
            temp.push_back (val);

            if (val == 1 && a == 0) {
                crc = j + 1;
                a = 1;
            }
        }
        arr.push_back (temp);
        if (a == 1) {
            crr = i + 1;
            a = 0;
        }
    }
    o = abs(crr - 3) + abs(crc - 3);
    cout << o;
}