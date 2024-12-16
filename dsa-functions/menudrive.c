#include <stdio.h>

void inputarray(int arr[], int *size) {
    int i;
    printf("Enter the size of the array: ");
    scanf("%d", size);

    printf("Enter %d elements:\n", *size);
    for (i = 0; i < *size; i++) {
        scanf("%d", &arr[i]);
    }
}

void insertelement(int arr[], int *size, int element, int position) {
    if (position < 1 || position > *size + 1) {
        printf("Invalid input\n");
        return;
    }
    for (int i = *size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element;
    (*size)++;
}

void deleteelement(int arr[], int *size, int position) {
    if (position < 1 || position > *size) {
        printf("Invalid position\n");
        return;
    }
    for (int i = position - 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
void reversearray(int arr[],int *n){
	int temp;
	for (int i =0;i<*n/2;i++){
	temp = arr[i];
	arr[i]=arr[*n-i-1];
	arr[*n-i-1]=temp;
	}
	}

void printarray(int arr[], int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, element, position;
    int arr[500];

    inputarray(arr, &n);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert the element (1-%d): ", n + 1);
    scanf("%d", &position);

    insertelement(arr, &n, element, position);

    printarray(arr, n);

    printf("Enter the position of the element to delete (1-%d): ", n);
    scanf("%d", &position);

    deleteelement(arr, &n, position);
    
    printf("array after deleting and reversing  the element is :\n");
    
    reversearray(arr, &n);
    
    

    printarray(arr, n);

    return 0;
}