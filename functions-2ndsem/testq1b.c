#include<stdio.h>
int fibo(int n){
	if(n<=1){
		return n;
		
	}else{
		return fibo(n-1)+fibo(n-2);
	}
}
int main(){
	int n ;
	printf("enter the value of n");
	scanf("%d",&n);
	int result=fibo(n);
	printf("the %dth term in the fibonacci sequence is %d",n,result);
	return 0;
	
	
}