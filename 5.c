//WAP to find a summation of a digit of a given number. (Iterative and recursive) 
#include <stdio.h>
int SumIterative(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;  
        number /= 10;         
    }
    return sum;
}

int SumRecursive(int number) {
    if (number == 0)  
        return 0;
    return (number % 10) + SumRecursive(number / 10);  
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;  
    }

    printf("Sum of digits (Iterative): %d\n", SumIterative(number));
    printf("Sum of digits (Recursive): %d\n", SumRecursive(number));
}
