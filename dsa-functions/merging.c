#include <stdio.h>

void inputarray(int arr[], int *n)
{
    int i;
    printf("Enter the size of the array\n");
    scanf("%d", n);
    printf("enter the elements of the array\n");
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printarray(int arr[], int n)
{

    printf("the array elements are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

void mergearray(int arr1[], int arr2[], int arr3[], int *n1, int *n2, int *n3)
{

    int i = 0;
    *n3 = *n1 + *n2;
    for (i = 0; i < *n1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < *n2; i++)
    {
        arr3[i + *n1] = arr2[i];
    }
}

int main()
{

    int arr1[500], n1;
    int arr2[500], n2;
    int arr3[500], n3;
    printf("enter the first array\n");
    inputarray(arr1, &n1);
    printarray(arr1, n1);
    printf("enter the second array\n");
    inputarray(arr2, &n2);
    printarray(arr2, n2);
    mergearray(arr1, arr2, arr3, &n1, &n2, &n3);
    printarray(arr3, n3);
    return 0;
}