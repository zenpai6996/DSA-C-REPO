#include <stdio.h>

int main() {
    int rows, cols, nonZeroCount;
    int sparse[20][3];  
    int transposed[20][3];  

   
    printf("Enter the number of rows in the sparse matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the sparse matrix: ");
    scanf("%d", &cols);
    printf("Enter the number of non-zero elements: ");
    scanf("%d", &nonZeroCount);

   
    printf("Enter the sparse matrix in 3-tuple format (Row Column Value):\n");
    for (int i = 0; i <= nonZeroCount; i++) {
        scanf("%d %d %d", &sparse[i][0], &sparse[i][1], &sparse[i][2]);
    }

    transposed[0][0] = cols;  
    transposed[0][1] = rows;  
    transposed[0][2] = nonZeroCount;  

    
    for (int i = 1; i <= nonZeroCount; i++) {
        transposed[i][0] = sparse[i][1];  
        transposed[i][1] = sparse[i][0]; 
        transposed[i][2] = sparse[i][2]; 
    }

    printf("The transposed sparse matrix in 3-tuple format is:\n");
    printf("Row  Column  Value\n");
    for (int i = 0; i <= nonZeroCount; i++) {
        printf("%d      %d      %d\n", transposed[i][0], transposed[i][1], transposed[i][2]);
    }

    return 0;
}