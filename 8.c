//WAP to find a total odd and total even digit of a given number.
#include <stdio.h>
int main() {
    int num, digit, oddCount = 0, evenCount = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10; 
        if (digit % 2 == 0)
            evenCount++; 
        else
            oddCount++;  
        num /= 10; 
    }

    printf("Total even digits: %d\n", evenCount);
    printf("Total odd digits: %d\n", oddCount);
}
