#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    if (a > 0) {
        cout << "A is positive" << endl;
    }
    else if (a < 0) {
        cout << "A is negative" << endl;
    }
    else {
        cout << "A is neither positive nor negative" << endl;
    }

    if (b > a) {
        cout << "B is greater" << endl;
    }
    else if (b > 0) {
        cout << "B is positive" << endl;
    }
    else {
        cout << "B is negative" << endl;
    }

    return 0;
}