//WAP to find a sum of even number into 1D array
#include <stdio.h>
void main(){
    int n;
    printf("Enter Array of a size: ");
    scanf("%d",&n);
    int a[n], sum=0;

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++){
        if(a[i] % 2 ==0)
            sum += a[i];
    }

    printf("Sum of even numbers: %d",sum);
}