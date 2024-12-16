#include <stdio.h>

int main() {
    int rows, cols, i, j, nonZeroCount = 0;
    int matrix[10][10], sparse[20][3];

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0) {
                nonZeroCount++;
             }
             }
             }
    

    sparse[0][0] = rows;
    sparse[0][1] = cols;
    sparse[0][2] = nonZeroCount;

    int k = 1; 
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
            }
            }

    printf("The sparse matrix in 3-tuple format is:\n");
    printf("Row  Column  Value\n");
    for (i = 0; i <= nonZeroCount; i++) {
        printf("%d      %d      %d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    return 0;
}