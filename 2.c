//WAP to find whether string is palindrome or not. 
#include <stdio.h>
#include <string.h>

void main() {
    char string[100];
    int length, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", string);

    length = strlen(string);

    for (int i = 0; i < length / 2; i++) {
        if (string[i] != string[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");
}
