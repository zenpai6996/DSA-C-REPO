#include<stdio.h>
int main(){
        int c=2,w=7;
        int temp[c][w];
        int city;
        int day;
        for(city=0;city<c;++city){
                for(day=0;day<w;++day){
                printf("Enter the tempe  ");
                printf("city %d, day %d : " , city +1,day+1);
                scanf("%d",&temp[city][day]);
                }
        }

        printf("Displayig the temp \n ");
        for(city=0;city<c;++city){
                for(day=0;day<w;++day){
                printf("City %d,Day %d = %d degrees Celcius \n",city+1,day+1,temp[city][day]);
                }
        printf("\n");
        }
        return 0;
}