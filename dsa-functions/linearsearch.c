#include<stdio.h>

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

int main (){

    int arr[]= { 12,23,43,13,46,34,67,24,67,32,45,32};
    int size = sizeof(arr)/sizeof(int);
    int element = 67;
    int searchindex = linearsearch(arr,size,element);
    printf("the element %d was found at index %d\n",element,searchindex);





    return 0;
}