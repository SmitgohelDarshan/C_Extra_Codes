// WAP to find Max, Min, Average of n numbers, n should be taken from user and all n value should 
// be taken from user (Note that you are not allowed to use an array for this) 
#include <stdio.h>
void main(){
    int n, min, max, sum=0;
    float avg;
    printf("Enter Number for total itreation:");
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    min = arr[0], max = arr[0];
    for(int i = 0; i<n; i++){
        
        sum += arr[i]; 
        min = (arr[i] < min)?(arr[i]):(min);
        max = (arr[i] > max)?(arr[i]):(max);

    }
    avg = (float) (sum / n);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average of n number:%.2f",avg);

}