// Given an array of N integers, and an integer K, find the number of pairs of elements in the array 
// whose sum is equal to K. 
// e.g. Input: 
// N = 4, K = 6 
// arr[] = {1, 5, 7, 1} 
// Output: 2 
// Explanation: 
// arr[0] + arr[1] = 1 + 5 = 6 
// and arr[1] + arr[3] = 5 + 1 = 6. 
#include <stdio.h>
void main(){
    int n, k, count=0;
    printf("Enter size of an array:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter k:");
    scanf("%d",&k);

    int arr2[n];
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == k){
                count++;
            }
        }
    }
    printf("Output: %d",count);
}