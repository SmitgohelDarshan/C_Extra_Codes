//WAP to convert a Decimal number to BCD.
#include <stdio.h>
void main() {
    int number, reversed_number = 0, digit;
    printf("Enter Number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10; 
        reversed_number = reversed_number * 10 + digit; 
        number /= 10; 
    }

    printf("BCD: ");
    while (reversed_number > 0) {
        digit = reversed_number % 10; 

        switch (digit) {
            case 0: printf("0000 "); break;
            case 1: printf("0001 "); break;
            case 2: printf("0010 "); break;
            case 3: printf("0011 "); break;
            case 4: printf("0100 "); break;
            case 5: printf("0101 "); break;
            case 6: printf("0110 "); break;
            case 7: printf("0111 "); break;
            case 8: printf("1000 "); break;
            case 9: printf("1001 "); break;
        }

        reversed_number /= 10; 
    }
}