// WAP to Convert a Decimal to Hexa-decimal and vice versa. 
#include <stdio.h>
#include <math.h>

void main() {
    int choice, hexaDecimal, decimal = 0, position = 0, rem;
    
    printf("1. Hexa-decimal to Decimal\n");
    printf("2. Decimal to Hexa-decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        
        printf("Enter an Hexa-decimal number: ");
        scanf("%d", &hexaDecimal);

        while (hexaDecimal > 0) {
            rem = hexaDecimal % 10;  
            decimal += rem * pow(16, position);  
            hexaDecimal /= 10;  
            position++;  
        }
        printf("Decimal: %d\n", decimal);
    } 
    else if (choice == 2) {

        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        int temp = decimal, hexaNum[32], i = 0;
        while (temp > 0) {
            hexaNum[i] = temp % 16;  
            temp /= 16;  
            i++;
        }

        printf("Octal: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", hexaNum[j]);
        }
        printf("\n");
    } 
    else {
        printf("Invalid choice!");
    }
}