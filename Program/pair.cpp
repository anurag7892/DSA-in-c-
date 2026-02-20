// Find the total number of pairs in the Array whose sum is equal to the given value x.

#include <iostream>
using namespace std;

int main() {
    int arr[8] = {1,2,3,4,5,6,7,8};
    int total_pair = 0;
    int x = 9;

    for(int i = 0; i <= 7; i++) {
        for(int j = i + 1; j <= 7; j++) {
            if(arr[i] + arr[j] == x) {
                total_pair++;
                cout << arr[i] << "," <<  arr[j] << endl;  
            }
        }
    }

    cout << total_pair << endl;
    return 0;
}