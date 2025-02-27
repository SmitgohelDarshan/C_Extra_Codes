//WAP to sort an Array using insertion sort. 
#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) { 
        int key = arr[i]; // Pick the current element
        int j = i - 1;

        printf("\nInserting %d: ", key);

        // Shift elements to the right to make space for key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key; // Insert key at the correct position

        // Print the array after each insertion
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
    }
}

int main() {
    int n;
    
    // User input for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // User input for array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array
    insertionSort(arr, n);

    // Printing the final sorted array
    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
