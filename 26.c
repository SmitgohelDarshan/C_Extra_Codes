#include <stdio.h>
#include <math.h>

void main() {
    int binary, decimal = 0, position = 0, rem;
    
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        rem = binary % 10;  
        decimal += rem * pow(2, position);  
        binary /= 10;  
        position++;  
    }
    printf("Decimal: %d", decimal);
}
