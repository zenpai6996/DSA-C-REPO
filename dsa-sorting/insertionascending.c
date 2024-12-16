#include <stdio.h>

void insertionSortAscending(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void insertionSortDescending(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
 
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);


    printf("Original array:\n");
    printArray(arr, n);
    
    insertionSortAscending(arr, n);
    printf("Array sorted in ascending order:\n");
    printArray(arr, n);

   int arr2[] = {12, 11, 13, 5, 6};
    insertionSortDescending(arr2, n);
    printf("Array sorted in descending order:\n");
    printArray(arr2, n);

    return 0;
}
