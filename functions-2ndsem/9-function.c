#include<stdio.h>
void SWAP(int *a,int *b){
    int temp=*a;
    *a =*b;
    *b = temp;

}
int main (){
    int num1;
    printf("enter the value of first number:");
    scanf("%d",&num1);
    int num2;
    printf("enter the value second number: ");
    scanf("%d",&num2);

    printf("The numbers before swapping : num1 =%d,num2 =%d\n",num1,num2);
    SWAP(&num1,&num2);
    printf("The numbers before swapping : num1 =%d,num2 =%d\n",num1,num2);
  

return 0;

}