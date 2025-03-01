//WAP to enter an element at specific position into array. (Do not take a new array) 
#include <stdio.h>
void main() {
    int n, element, position;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &position);

    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Inserting the new element
    arr[position - 1] = element;

    printf("Updated array: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
}
