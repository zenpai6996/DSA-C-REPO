#include<stdio.h>

void inputarray(int arr[],int *size){
    printf("enter the size of the array:\n");
    scanf("%d",size);
    printf("enter the %d elements of the array:",*size);
    for (int i =0; i<*size;i++){
            scanf("%d",&arr[i]);

    }
}
void displayarray(int arr[],int size){
    printf("The array elements are :\n");
    for (int i =0 ;i<size ;i++){
        printf("%d\n",arr[i]);
    }
}
void insertion(int arr[],int *size, int position , int element){
    if (position <1||position >*size){
        printf("invalid input");
        return ;
    }
    for (int i=*size;i>=position;i--){
        arr[i]=arr[i-1];

    }
    arr[position -1]=element;
    (*size)++;
}
int main (){

    int arr[500], element , position ,size ;
    inputarray(arr,&size );
    displayarray(arr,size);
    printf("enter the element to be inserted in the array:\n");
    scanf("%d",&element);
    printf("enter the position the element is to be inserted in :\n");
    scanf("%d",&position);
    insertion(arr,&size,position,element);
    displayarray(arr,size);
    return 0;
}