#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int substract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
int divide(int a,int b){
    if(b==0){
        printf("error division by zero is not possible");
}else{return (float)a/b;
}
}
int main (){
    int num1 ,num2;
    int choice;
    printf("enter the first number");
    scanf("%d",&num1);
    printf("enter the second number");
    scanf("%d",&num2);

    printf("enter an operator");
    printf("!:ADD\n");
    printf("2.SUBSTRACT\n");
    printf("3.MULTIPLY\n");
    printf("4.DIVIDE\n");
    printf("enter your choice ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Result : %d\n",add(num1,num2));
        break;
    
    case 2:
    printf("Result: %d\n",substract(num1,num2));
    break;

    case 3:
    printf("Result : %d \n ", multiply(num1,num2));
    break;

    case 4:
    printf("Result: %d\n", divide(num1,num2));
    break;

    }
    return 0;
}
