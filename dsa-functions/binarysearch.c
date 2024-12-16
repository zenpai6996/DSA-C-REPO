#include<stdio.h>

int binarysearch(int arr[],int size , int element){
//works oly on sorted array
int mid , high , low ;
low =0;
high = size -1;

while (low<=high){

mid = (low + high)/2;

if(arr[mid]==element){
    printf("element found at index %d\n",mid);
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

int main (){

    int arr[]= { 12,23,43,46,54,67,77,82,85,92};
    int size = sizeof(arr)/sizeof(int);
    int element = 67;
    binarysearch(arr,size,element);
    





    return 0;
}