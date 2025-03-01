// WAP to check weather number is present in array or not (using recursion only) and the 
// function’s syntax is given below 
// Int isInArray(int a[],int m); 
// Where int a[] is Array of integer and m is element to be searched. 
#include <stdio.h>
int isInArray(int a[], int index, int m);  

void main() {
    int n, element;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to check: ");
    scanf("%d", &element);

    if (isInArray(a, 0, element)) {
        printf("Element is present");
    } else {
        printf("Element is not found");
    }
}

int isInArray(int a[], int index, int m) {
    if (index < 0)  
        return 0;

    if (a[index] == m) 
        return 1;  

    return isInArray(a, index + 1, m);  
}
