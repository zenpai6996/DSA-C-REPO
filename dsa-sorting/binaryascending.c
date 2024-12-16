#include <stdio.h>


int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
       
        int mid = low + (high - low) / 2;

        
        if (arr[mid] == target) {
            return mid;  
        }

       
        if (arr[mid] > target) {
            high = mid - 1;
        }
       
        else {
            low = mid + 1;
        }
    }

    
    return -1;
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
   
    int arr[] = {2, 3, 4, 10, 40, 50, 60, 70, 80, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");
    printArray(arr, size);

    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
