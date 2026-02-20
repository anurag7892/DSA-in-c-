#include <iostream>
using namespace std;
 void fun( int arr[]){
    arr[0] = 10;
    return;
 }
 int main(){
    int arr [5] = {1,2,3,4,5,};
    cout<< arr[0]<<endl;
    fun(arr);
       cout<< arr[0]<<endl; 
       return 0;
 }