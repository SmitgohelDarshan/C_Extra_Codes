//WAP to find a power a^b (without using power and multiplication operation).
#include <stdio.h>

int main() {
    int base, power, result = 1;
    printf("Enter Base and Power: ");
    scanf("%d %d", &base, &power);

    for (int i = 0; i < power; i++) {
        int sum = 0;
        for (int j = 0; j < result; j++) {  
            sum += base;
        }
        result = sum;
    }

    printf("%d^%d = %d", base, power, result);
}
