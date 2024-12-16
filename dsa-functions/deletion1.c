#include<stdio.h>
void inputarray(int arr[],int *size){
    printf("enter the size of the array:\n");
    scanf("%d",size);
    printf("enter the %d elements of the array:\n",*size);
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
void deletion(int arr[] , int *size , int position){
    if(position<1||position>*size ){
        printf("invalid input");
        return;

    }
    for(int i = position-1; i<*size;i++){
        arr[i]=arr[i+1];
    }
    (*size--);
}
int main (){
    int arr[500], size, position;
    inputarray(arr,&size);
    displayarray(arr,size);
    printf("enter the position the element is to be deleted from:\n");
    scanf("%d",&position);
    deletion(arr,&size,position);
    displayarray(arr,size);
    return 0;
}