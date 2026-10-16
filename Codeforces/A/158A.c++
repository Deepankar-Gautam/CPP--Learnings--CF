#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    int k;
    vector<int> arr;
    int a;
    int c = 0;
    cin >> n;
    cin >> k;

    for (int i = 0; i < n; i++) {
        
        cin >> a;
        arr.push_back (a);
    }

    for (int i = 0; i < n; i++) {
        if ((arr[i] != 0) && (arr[i] >= arr[k-1])) {
            c++;
        }
    }

    cout << c;
}