#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

int main () {
    string s;
    vector <int> arr;
    string o;

    cin >> s;

    for (int i = 0; i < s.size(); i++ ) {
        if (isdigit(s[i]) == true) {
            int a = (s[i]) - '0';
            arr.push_back (a);
        }
    }

    sort (arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++) {
        if (i != arr.size() - 1) {
            string b = to_string(arr[i]);
            o = o + b + "+";
        } else {
            string b = to_string(arr[i]);
            o += b;
        }
    }
    cout << o;
    return 0;
}