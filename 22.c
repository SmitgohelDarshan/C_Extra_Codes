/*     1
      A B
     2 3 4 
    C D E F   
*/

/*  *********
     *******
      *****
       ***
        *
*/

/*  *********
    **** ****
    ***   ***
    **     **
    *       *
*/
#include <stdio.h>

void main() {
    int i=0, j=0, number = 1, k, spaces, character = 65;
    k=i;
    // First Pattern
    for (i = 0; i < 4; i++) {
        for (k = 0; k < 4 - i; k++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            if (k == 1 || k == 3) {  
                printf("%c ", character);
                character++;
            } else {
                printf("%d ", number);
                number++;
            }
        }
        printf("\n");
    }

    //second pattern
    for (i = 5; i > 0; i--) {
        for (k = 0; k < 5 - i; k++) {  
            printf(" ");
        }
        for (j = 0; j < (2 * i - 1); j++) {  
            printf("*");
        }
        printf("\n");
    }

    //third pattern
    for (i = 0; i < 5; i++) {
        for (j = 5; j > i; j--) {
            printf("*");
        }

        for (spaces = 0; spaces < 2 * i; spaces++) {
            printf(" ");
        }

        for (j = 5; j > i; j--) {
            printf("*");
        }
        printf("\n");
    }
}
