#include<stdio.h>
int factorial(int n,int *r){
    int fact=1,i;
    for (i =1;i<=n;i++){
        fact *=i;    }
        *r=fact;
}


int main (){
    int num,result;
    printf("enter the value");
    scanf("%d",&num);
    factorial(num,&result);
    printf("the factorial of %d is %d ",num,result);
    return 0;
}