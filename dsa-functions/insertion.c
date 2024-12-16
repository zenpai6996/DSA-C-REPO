#include<stdio.h>

void display(int arr[],int n)
// travesrsal
{
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

int indinsertion(int arr[],int size,int element, int capacity ,int index){
// insertion
    if(size>=capacity){
        return -1;

    }
    for(int i = size -1 ; i>=index;i--){

        arr[i+1]=arr[i];

    }
    arr[index]=element;

    return 1;

}
/// @brief 
/// @return 
int main (){

    int arr[100]={1,21,34,42,59};

    int size =5; int element=27; int index =2;
   
    display( arr,size);

    printf("\n");

    indinsertion(arr,size,element,100,index);

    size += 1;

    display ( arr , size);

    return 0;



}