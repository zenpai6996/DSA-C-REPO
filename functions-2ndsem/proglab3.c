#include <stdio.h>

int main() {
    int N;

   
    printf("Enter the number of integers to store: ");
    scanf("%d", &N);

 
    int arr[N];

   
    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Contents of the array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}