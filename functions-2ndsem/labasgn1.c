#include<stdio.h>
int add (int a, int b){
    return a+b;
    }
    int main()
    {
        int num1,num2;
        printf("enter the value of num1 ");
        scanf("%d",&num1);
        printf("enter the value of num2 ");
        scanf("%d",&num2);
        int result = add(num1,num2);
        printf("the sum of the two numbers is %d",result);
        return 0
         ;
    }