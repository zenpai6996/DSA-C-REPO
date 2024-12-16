

#include <stdio.h>
int main()
{
    int m,n,k,x;
    int c=0;
    printf("Enter number of rows of matrix A = ");
    scanf("%d",&m);
    printf("Enter number of columns of matrix A = ");
    scanf("%d",&n);
    printf("Enter number of rows of matrix B = ");
    scanf("%d",&k);
    printf("Enter number of columns of matrix B = ");
    scanf("%d",&x);
    int a[m][n];
    int b[k][x];
    if(m==k && n==x){
    printf("Enter value of matrix A :- \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%f",&a[i][j]);
            }

            }
    printf("Enter value of matrix B:- \n");
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<x;j++)
        {
                scanf("%f",&b[i][j]);
            }
        }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(a[i][j]==b[i][j]){
                c++;
            }
        }
    }
    if(c==(m*n)){
        printf("Matrix A is equal to Matrix B");

    }
    else{
        printf("Matrix A is not equal to Matrix B");
    }
    }
    else{
         printf("Matrix A is not equal to Matrix B");
    }
}