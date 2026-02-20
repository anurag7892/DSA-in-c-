#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: " << endl;
    cin >> n;

    int i = 1;
    int sum = 0;   // separate variable for sum

    while (i <= n) {
        sum = sum + i;   // add i to sum
        i++;             // increment i
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
