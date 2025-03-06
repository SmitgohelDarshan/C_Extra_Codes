// WAP to convert an Octal into hexa-decimal.
#include <stdio.h>
#include <math.h>
void main(){
    int octal, decimal = 0, position = 0, rem;

    printf("Enter a Octal number: ");
    scanf("%d", &octal);

    while (octal > 0) {
        rem = octal % 10;  
        decimal += rem * pow(8, position);  
        octal /= 10;  
        position++;  
    }
    printf("Hexa-ecimal: %x", decimal);
}