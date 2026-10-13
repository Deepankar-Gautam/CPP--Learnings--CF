#include <iostream>
using namespace std;

int main() {
    
    // which integer is bigger
    int a = 10;
    int b = 30;

    if (a > b) {
        cout << endl << a;
    } else {
        cout << endl << b;
    }

    //even odd
    int c = 32;

    if (c % 2 == 0) {
        cout << endl << "even";
    } else {
        cout << endl << "odd";
    }

    // +ve, -ve, zero
    int d = -23;

    if (d > 0) {
        cout << endl << "even";
    } else if (d < 0) {
        cout << endl << "odd";
    } else {
        cout << endl << "zero";
    }

    // greater b/w 3 numbers
    int x = 1000;
    int y = 200;
    int z = 25;

    if (x > y) {
        if (x > z) {
            cout << endl << "x is greater";
        } else if (y > z) {
            cout << endl << "y is greater";
        } else {
            cout << endl << "z is greater";
        }
    } else if (y > z) {
        cout << endl << "y is greater";
    } else {
        cout << endl << "z is greater";

    }
    // using operators
    if (x > y && x > z) {
        cout << endl << "x is greater";
    } else if (y > x && y > z) {
        cout << endl << "y is greater";
    } else {
        cout << endl << "z is greater";
    }

    // leap year or not
    int year = 2004;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        cout << endl << "This is a leap year";
    } else {
        cout << endl << "This is not a leap year";
    }
    
    return 0;
}