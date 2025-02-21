//WAP to find a factorial of a given integer (iterative and recursive) 
#include <stdio.h>
int FactorialIterative(int number) {
    int factorial = 1;
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }
    return factorial;
}

int FactorialRecursive(int number) {
    if (number == 0 || number == 1)  
        return 1;
    return number * FactorialRecursive(number - 1);  
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial (Iterative): %d\n", FactorialIterative(number));
        printf("Factorial (Recursive): %d\n", FactorialRecursive(number));
    }
}
