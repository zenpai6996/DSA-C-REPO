//wap to find fibonacci sequence of n terms.
#include<stdio.h>
int fibonacci(int n){
    if(n<=1){
        return n;
    }else{
    int result = fibonacci(n-1)+fibonacci(n-2);
    return result;
    }
}
int main (){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int value =fibonacci(n);
    printf("the %dth term in the fibonacci sequence is %d",n,value);
    return 0;
    

}