#include<stdio.h>

void inputarray(int arr[],int *n){
    int i;
    printf("Enter the size of the array\n");
    scanf("%d",n);
    printf("enter the elements of the array\n");
    for (int i =0;i<*n;i++){
        scanf("%d",&arr[i]);

    }
}

void printarray(int arr[],int n){

    printf("the array elements are :\n");
    for (int i =0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
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
int main (){
int arr[500],n;
inputarray(arr,&n);
printf("the unsorted array is :\n");
printarray(arr,n);
printf("the sorted array is :\n");

bubblesort(arr,n);
printarray(arr,n);

return 0;

}