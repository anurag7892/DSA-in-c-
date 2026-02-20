#include <stdio.h>
int main(){
    int n, i;
    int bt [20], wt[20],tat [20];
    float awt = 0, atat = 0;
    print ("Enter the number of process:");
    scanf("%d",n);
    printf("Enter the burst time of the processes:");
    for (i = 0; i<n; i++){
        scanf("%d", &bt [i]);
    }
    wt [0] = 0;
    return 0;
}