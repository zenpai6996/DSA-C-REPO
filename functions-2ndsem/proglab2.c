#include<stdio.h>
int main(){
	int physics[]={1,2,3,4,5};
	
	int chem[]={2,3,5,6,6};
	
	int bio[]={6,54,3,22,4};
	
	int maths[]={9,87,6,5,4};
	
	int eng[]={11,2,43,23,12};
	
	int *marks[]={physics,chem,bio,maths,eng};
	
	int i =0;int j =0;
	
	for(i=0;i<5;i++){
		
		printf("\n");
		
		for(j=0;j<5;j++){
			
			//printf("%d\t",marks [i][j]);
			//printf("%d\t",*(*(marks+ i) + j));
			printf("%d\t",*(*(marks+ i) + j));
			
		}
	}
	
	
	//printing studentwise adress
	
	int sum =0; float average=0.0;
	
	for(i=0;i<5;i++){
		sum =0;
		for(j=0;j<5;j++){
			sum = sum + marks[j][i];
			
		}
		 average= sum/5;
		printf("\n the average of %d student is %f\n",i,average);
	}
	//pointer representation
	printf("\nMarks =%p\n",*marks);
	printf("\n**Marks")
	
	return 0;
}