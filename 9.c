//WAP to find whether a number is Odd or Even without using a % operator.
#include <stdio.h>
void main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    if(number & 1) 
        printf("Odd");
    else
        printf("Even");
}