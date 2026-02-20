#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter your first number";
    cin >>a;
    cout << "Enter your second number";
    cin >>b;
    if (a>b){
        cout << "First number is greater than second number";
    }
    else if (a<b){
        cout << "Second number is greater than first number";
    }
    else {
        cout << "Both numbers are equal";
    }
}