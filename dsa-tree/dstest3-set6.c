#include <stdio.h>
void swap(int*a,int*b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
void bubble_sort(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void print_Arr(int SortArr[],int len)
{
    printf("Sorted array : ");
    for(int i=0;i<len;i++)
    {
        printf("%d\t",SortArr[i]);
    }
}
int main()
{
    int arr[] = {19, 38, 40, 3, 12,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    bubble_sort(arr,n);
    print_Arr(arr,n);
    return 0;
}
