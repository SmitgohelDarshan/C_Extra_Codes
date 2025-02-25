//WAP to find a Multiplication of 2 Matrix (dimension and value should be entered by user) 
#include <stdio.h>
void main(){
    int row1, column1, row2, column2;
    printf("Enter number of Rows and Columns for matrix-1:");
    scanf("%d %d",&row1, &column1);

    printf("Enter number of Rows and Columns for matrix-2:");
    scanf("%d %d",&row2, &column2);

    if(column1 != row2){
        printf("Matrix Multiplication not possible");
    }

    int arr1[row1][column1];
    for(int i = 0; i<row1; i++){
        for(int j = 0; j<column1; j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    int arr2[row2][column2];
    for(int i = 0; i<row2; i++){
        for(int j = 0; j<column2; j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    int result[row1][column2];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            for (int k = 0; k < column1; k++) {  
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("Multiplication:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}