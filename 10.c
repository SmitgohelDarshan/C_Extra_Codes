// WAP to find a prime number between range (range should be entered by user).
#include <stdio.h>
void main(){
    int start, end, j, count;

    printf("Enter Starting Point:");
    scanf("%d",&start);
    printf("Enter ending Point:");
    scanf("%d",&end);

    for(int i=start; i<end; i++){
        if(i<2)
            continue;
        
        count = 0; 

        for (j = 1; j <= i; j++) {
            if (i % j == 0)
                count++;
        }
    
        if (count == 2) 
            printf("%d ", i);
    }
}