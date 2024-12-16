#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSortAscending(int arr[], int n) {
    int i, j, minIdx;
    
    for (i = 0; i < n - 1; i++) {
        minIdx = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        
        swap(&arr[minIdx], &arr[i]);
    }
}

void selectionSortDescending(int arr[], int n) {
    int i, j, maxIdx;
    for (i = 0; i < n - 1; i++) {
        maxIdx = i;
        
       
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        swap(&arr[maxIdx], &arr[i]);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:\n");
    printArray(arr, n);
    
    selectionSortAscending(arr, n);
    printf("Array sorted in ascending order:\n");
    printArray(arr, n);
    int arr2[] = {64, 25, 12, 22, 11};
    selectionSortDescending(arr2, n);
    printf("Array sorted in descending order:\n");
    printArray(arr2, n);

    return 0;
}
