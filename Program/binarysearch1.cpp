#include<iostream>
using namespace std;
int  bin_search(int arr[], int size, int key){
 int low =0, mid , high = size -1;
 while(low<=high){
 mid = (low + high ) /2;
 if(arr[mid] == key){
    return mid;
 }
 if(arr[mid]<key){
    low = mid +1 ;
 }
else{
    high = mid - 1;
 }
}
return -1;
}

int main(){
     int arr[] = {4, 3, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int key = 8;

    int result = bin_search(arr, size, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}