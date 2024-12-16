
#include <stdio.h>
int main()
{
    int m,n;
    float s;
    float a[2][2];
    float b[2][2];
    for(int k=1;k<=2;k++)
    {
        printf("Enter elements of %dst matrix :-\n",k);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(k==1){
                printf("Enter the value of a%d%d =",i+1,j+1);
                scanf("%f",&a[i][j]);
            }
            else{
                printf("Enter the value of b%d%d =",i+1,j+1);
                scanf("%f",&b[i][j]);
            }
        }


    }
    printf("\n");
    }
    printf("Sum of  Matrix :-\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           s=a[i][j]+b[i][j];
           printf("%.2f ",s);
        }
        printf("\n");
    }
}