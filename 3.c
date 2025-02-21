//WAP to find a Factor of a given number (iterative and recursive)
#include <stdio.h>
void FactorsIterative(int number) {
    printf("Factors (Iterative): ");
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void FactorsRecursive(int number, int i) {
    if (i > number) return;  
    if (number % i == 0) {
        printf("%d ", i);
    }
    FactorsRecursive(number, i+1);
}

void main() {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    FactorsIterative(number);

    printf("Factors (Recursive): ");
    FactorsRecursive(number, 1);
}
