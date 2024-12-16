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
int linearsearch(int arr[],int size,int element  ){
    for(int i =0 ;i< size;i++){
        if (arr[i]==element){
            printf("the element found at index %d",i);
            return 1;
        }
        else{
            printf("invalid input");
            return -1;
        }
        
        
    }
}
int main (){
    int arr[500],element;
    int size =sizeof(arr)/sizeof(int);
    inputarray(arr,&size);
    displayarray(arr,size);
    printf("enter the element to search for :\n");
    scanf("%d",&element);
    linearsearch(arr,size,element);
    return 0;
}