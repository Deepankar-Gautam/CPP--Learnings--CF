#include <iostream>
using namespace std;

int main () {
    int n;
    int m;
    int a;
    long long c1 = 0;
    long long c2 = 0;

    cin >> n;
    cin >> m;
    cin >> a;

    c1 = n / a;
    c2 = m / a;

    if (n % a != 0)
    c1 ++;
    if (m % a != 0)
    c2 ++;

    cout << c1 * c2;

    return 0;
}