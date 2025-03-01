// Given an array, rotate the array to the right by k steps, where k is non-negative. Example 
// 1:Input: nums = [1,2,3,4,5,6,7], k = 3 
// Output: [5,6,7,1,2,3,4] 
// Explanation: 
// rotate 1 step to the right: [7,1,2,3,4,5,6] rotate 2 
// steps to the right: [6,7,1,2,3,4,5] 
// rotate 3 steps to the right: [5,6,7,1,2,3,4] 
#include <stdio.h>

void main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);
    
    k = k % n; 

    int arr2[n], j = 0;

    for (int i = n - k; i < n; i++, j++) {
        arr2[j] = arr[i];
    }

    for (int i = 0; i < n - k; i++, j++) {
        arr2[j] = arr[i];
    }

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
}
