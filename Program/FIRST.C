#include<stdio.h>
int findmissing(int arr[], int n) { 
    int xor1 = 0; 
    int xor2 = 0; 
    for (int i = 0; i < n; i++) {
        xor1 ^= arr[i];
    }
    for (int i = 1; i <= n + 1; i++) {
        xor2 ^= i;
    } 
    return xor1 ^ xor2; 
}

int main() {
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    int size = 7;
    int missing = findmissing(arr,size);
    printf("The missing number is %d\n", missing);
    return 0;
}


