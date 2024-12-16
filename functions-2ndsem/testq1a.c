#include<stdio.h>
int isleap(int year){
if(year%100==0){
	if(year%400==0){
		printf("%d is a leap year",year);
		
	}else{
		printf("%d is not a leap year",year);
	}

}else{
	if(year%4==0){
		printf("%d is a leap year",year);
	}else{
		printf("%d is not a leap year",year);
	}
}
}
int main (){
    int year;
    printf("enter the year");
    scanf("%d",&year);
    int result =isleap(year);
	printf("Result = %d",result);
    
    return 0;
}