//WAP to find a Fibonacci series up to n terms (n is entered by user) (iterative and recursive)

#include <stdio.h>
void FiboIterative(int n) {
    int a = 0, b = 1, sum;
    printf("Fibonacci series (Iterative): ");
    for (int i = 1; i <= n; i++) {
        printf("%d", a);
        if (i < n) {
            printf(", ");
        }
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("\n");
}

int FiboRecursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return FiboRecursive(n - 1) + FiboRecursive(n - 2);
}

void main() {
    int number;
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    FiboIterative(number);

    printf("Fibonacci series (Recursive): ");
    for (int i = 0; i < number; i++) {
        printf("%d", FiboRecursive(i));
        if (i < number - 1) {
            printf(", ");
        }
    }
}
