#include <iostream> 
using namespace std;
 int linearsearch(int arr[],int size,int target){
 for(int i = 0; i < size; i++)    
 {
  if(arr[i] == target){
    return i;
  }
 }
 return -1;

 }

int main(){
      int arr[] = {4, 3, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    int result = linearsearch(arr,size,target);
      if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;




    
}