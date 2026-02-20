#include<stdio.h>
int main(){
    int arr[] = {1, 3, 20, 4, 1, 0, 9, 8, 7};
    int size = 7;

    int index = -1;
    for(int i = 1; i < size - 1; i++){
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
            index = i;
            break;
        }
    }
    printf("The peak index is %d\n", index);
    return 0;
} 

