//WAP to find weather given number is Armstrong number is not.
// WAP to find whether the given number is an Armstrong number or not.
#include <stdio.h>

int main() {
    int num, originalNum, sum = 0, remainder, digits = 0, temp, power;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    int n = num;

    while (n != 0) {
        n /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;

        power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == originalNum) {
        printf("%d is an Armstrong number.", num);
    } else {
        printf("%d is not an Armstrong number.", num);
    }
}
