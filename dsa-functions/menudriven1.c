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


int linearsearch(int arr[],int size , int element){

    for (int i =0 ; i< size ; i++){

        if (arr[i]==element){
            printf("element found at index %d\n",i);
            return 1;
        }
    }
    printf("element not found");
    return -1;
}

int binarysearch(int arr[],int size , int element){
//works only on sorted array
int mid , high , low ;
low =0;
high = size -1;

while (low<=high){

mid = (low + high)/2;

if(arr[mid]==element){
    printf("element %d found at index %d\n",element,mid);
    return 1;
}
if(arr[mid]<element){
    low = mid+1;
}
else {

    high = mid-1;
}
}
return -1;
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

void reversearray(int arr[], int *n) {
    int temp;
    for (int i = 0; i < *n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[*n - i - 1];
        arr[*n - i - 1] = temp;
    }
}
void mergearray(int arr1[],int arr2[],int arr3[],int *n1 , int *n2, int *n3){

    int i =0;
     *n3 = *n1 +*n2 ;
    for (i=0;i<*n1;i++){
        arr3[i]=arr1[i];
    }
    for(int i =0 ;i<*n2;i++){
        arr3[i+*n1]=arr2[i];
    }
    
}
void bubblesort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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
    int n = 0, element, position, choice,n1,n2,n3;
    int arr[500];
    int arr1[500];
    int arr2[500];
    int arr3[500];
    while (1) {
        printf("\nMenu:\n");
        printf("1. linear search\n");
        printf("2. Insert element\n");
        printf("3. Delete element\n");
        printf("4. Reverse array\n");
        printf("5. binary search\n");
        printf("6. Merge array\n");
        printf("7. Bubble sort:\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1://linear search
                inputarray(arr, &n);
                printf("enter the element to search:\n");
                scanf("%d",&element);
                int searchindex = linearsearch(arr,n,element);
                printf("the element %d was found at index %d \n",element,searchindex);
                return 0;
                break;
            case 2://insertion
                inputarray(arr, &n);
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position to insert the element (1-%d): ", n + 1);
                scanf("%d", &position);
                insertelement(arr, &n, element, position);
                printarray(arr, n);
                return 0;
                break;
            case 3://deletion
            inputarray(arr, &n);
                printf("Enter the position of the element to delete (1-%d): ", n);
                scanf("%d", &position);
                deleteelement(arr, &n, position);
                printarray(arr,n);
                return 0;
                break;
            case 4://reversal
            inputarray(arr,&n);
            printf("the entered array is :\n");
            printarray(arr,n);
                reversearray(arr, &n);
                printf("the array after being reversed is :");
                printarray(arr,n);
                return 0;
                break;
            case 5://binary search
            printf("enter a sorted array: \n");
                inputarray(arr, &n);
                printf("enter the element to search:\n");
                scanf("%d",&element);
             binarysearch(arr,n,element);
             return 0;
                
                break;
            case 6://Merge array
            printf("enter the first array :\n ");
            inputarray(arr1,&n1);
            printarray(arr1,n1);
            printf("enter the second array :\n");
            inputarray(arr2,&n2);
            printarray(arr2,n2);
            mergearray(arr1,arr2,arr3,&n1,&n2,&n3);
            printarray(arr3,n3);

            return 0;

            break;
            
            case 7://bublesort
            printf("enter the unsorted array:\n");
            inputarray(arr,&n);
            printarray(arr,n);
            printf("the sorted array is :\n");
            bubblesort(arr,n);
            printarray(arr,n);
            
            return 0;

            break;

            default:
                printf("Invalid choice. Please try again.\n");
                
        }
    }

    return 0;
}
