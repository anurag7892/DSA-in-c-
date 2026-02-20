#include <iostream>
using namespace std;
 void fun( int arr[]){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
 }
 int main(){
    int arr [5] = {1,2,3,4,5,};
     cout<< arr[0]<< " " <<arr[1]<<endl;
    fun(arr);
       cout<< arr[0]<< " " <<arr[1]<<endl; 
       return 0;
 }
  