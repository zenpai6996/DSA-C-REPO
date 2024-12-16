//calculate the factorial  of n numbers . 
#include<stdio.h>
int calculatefactorial(int num){
    int factorial=1;
    for(int i=1;i<=num;i++){
        factorial *= i;
    }
    return factorial;

}
int main (){
    int number;
   
    printf("enter the number");
    scanf("%d",&number);
    if (number <0){
        printf("factorial is not defined for negative numbers ");
        return 0;

    }
    int factorial =calculatefactorial(number);
    printf("the factorial of %d is %d ",number,factorial);



    return 0;
}