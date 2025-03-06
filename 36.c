//WAP to Convert a Decimal to Octal and Vice versa. 
#include <stdio.h>
#include <math.h>

void main() {
    int choice, octal, decimal = 0, position = 0, rem;
    
    printf("1. Octal to Decimal\n");
    printf("2. Decimal to Octal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        
        printf("Enter an octal number: ");
        scanf("%d", &octal);

        while (octal > 0) {
            rem = octal % 10;  
            decimal += rem * pow(8, position);  
            octal /= 10;  
            position++;  
        }
        printf("Decimal: %d\n", decimal);
    } 
    else if (choice == 2) {

        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        int temp = decimal, octalNum[32], i = 0;
        while (temp > 0) {
            octalNum[i] = temp % 8;  
            temp /= 8;  
            i++;
        }

        printf("Octal: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", octalNum[j]);
        }
        printf("\n");
    } 
    else {
        printf("Invalid choice!");
    }
}