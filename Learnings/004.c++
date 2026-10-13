#include <iostream>
using namespace std;

int main () {

    // vowel or cosonent
    char a = 'd';
    
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        cout << endl << "vowel";
    } else {
        cout << endl << "consonent";
    }

    // perfect and not perfect
    int b = 75;

    // 1st way
    if (b % 3 == 0) {
        if (b % 5 == 0) {
            cout << endl << "Perfect";
        } else {
            cout << endl << "Not perfect";
        }
        } else {
            cout << endl << "Not perfect";
    }

    //2nd way
    if (b % 3 == 0 && b % 5 == 0) {
        cout << endl << "Perfect";
    } else {
        cout << endl << "Not perfect";
    }

    // if no divisible by either 7 or 11
    int c = 121;

    if (c % 7 == 0 || c % 11 == 0) {
        cout << endl << "yes\n";
    } else {
        cout << endl << "no\n";
    }

    // input
    int num;
    cin >> num;
    cout << endl << "Your no. is " << num << "\n";

    // adding 2 input numbers
    int num1;
    int num2;
    int sum;
    cin >> num1;
    cin >> num2;
    sum = num1 + num2;
    cout << endl << sum << "\n";

    // input to check leap year
    int year;
    if ((year % 400 == 0) || (year % 4 == 0 % year % 100 != 0)) {
        cout << endl << "Yes, the year " << year << " is the leap year";
    } else {
        cout << endl << "No, the year " << year << " is not a leap year";
    }

    // for loop

    // printing no.s from 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << endl << i;
    }

    // print all even from 1 to 20
    for (int i = 0; i <= 20; i++) 
    if (i % 2 == 0) 
    cout << i << " ";

    // sum of first 10 natural numbers
    int sum = 0;
    for (int i = 1; i <= 10; i++) 
    sum += i;
    cout << endl << sum;
    
    return 0;
}