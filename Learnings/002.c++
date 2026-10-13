#include <iostream>
using namespace std;

int main () {
    // data types and variables
    int a = 10;
    cout << endl << a;
    
    char c = 'b';
    cout << endl << c;
    // char b = 'bc';         won't work as char only stores one character
    // cout << endl << b;

    float num = 2.65;
    cout << endl << num;

    double num2 = 3.34;
    cout << endl << num2;

    bool var = 1;
    cout << endl << var;

    bool var2 = false;       // can be stored as 0, 1, true, false
    cout << endl << var2;

    //sizeof() size of variables in bytes
    cout << endl << sizeof (a);
    cout << endl << sizeof (c);
    cout << endl << sizeof (num);
    cout << endl << sizeof (num2);
    cout << endl << sizeof (var);
    cout << endl << sizeof (var2);

    // typecasting
    int cat = 'A';             // returns 65 according to decimal in converstion chart
    cout << endl << cat;
    char dog = 65;             // returns A according to ASCIi in conversion chart
    cout << endl << dog;
    // char bat = 590;            // returns 78 because 590%256 = 78, so returns N
    // cout << endl << bat;

    // concepts of variable, arithmatic operators, assignment operators are same as conceptually

    return 0;
}