// Given an array of integers nums and an integer target, return indices of the two numbers such that 
// they add up to target. 
 
// You may assume that each input would have exactly one solution, and you may not use the same 
// element twice. 
 
// You can return the answer in any order. 
// Example 1: 
 
// Input: nums = [2,7,11,15], target = 9 
// Output: [0,1] 
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]. 
#include <stdio.h>
void main(){
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements of array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                printf("[%d, %d]", i, j);
            }
        }
    }
}