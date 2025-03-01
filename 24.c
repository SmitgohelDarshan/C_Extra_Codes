// WAP to delete an element from array specified by user. if element is not found print a 
// message “Element is not found” (do not take a new array). 
#include <stdio.h>
void main() {
    int n, element, index = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            index = i;
            break;  
        }
    }

    if (index == 0) {
        printf("Element is not found");
    } 
    else {
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deletion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
