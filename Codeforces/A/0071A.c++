#include <iostream>
#include <string>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (int i = 0; i != n; i++) {
        string s;
        cin >> s;

        int c = 0;
        char f = s[0];
        char l = s[s.length() - 1];

        if (s.length() <= 10) {
            cout << s << endl;
        } else {
            c = s.length() - 2;
            cout << f << c << l << endl;
            }
        }
}