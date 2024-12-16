#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][2] = {
        {1, 4},
        {2, 5},
        {3, 6}
    };

    int C[3][2];  // Resultant matrix C

    // Perform matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the resulting matrix C
    printf("Resultant matrix C:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
	 printf("Resultant matrix C:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

for(int m=0;m<i;m++){
	for(int n=0;n<j;n++){
		sum += C[m][n];
	}
}
printf("The sum of the elements of the matrix is :%d",sum);

    return 0;
}