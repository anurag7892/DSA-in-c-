// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.


#include <iostream>
using namespace std;
int main(){
int arr[7] = {1,2,3,4,5,6,7};
int SumEven = 0;
int SumOdd = 0;
  for( int i = 0 ; i<=6; i++){
    if( i%2==0){
        SumEven+= arr[i];

    }
    else{
         SumOdd+=arr[i];

    }
    
}

int result =  SumEven-SumOdd;
cout<<result<<endl;
return 0;
}
