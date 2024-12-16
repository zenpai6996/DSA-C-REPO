//Q4. WAP TO FIND THE SUM OF ELEMENTS OF UPPER TRIANGULAR.

#include <stdio.h>
int main()
{
    int m,n,s;
    printf("Enter number of rows of matrix  = ");
    scanf("%d",&m);
    printf("Enter number of columns of matrix  = ");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter values of the matrix :- \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter a%d%d value :",i,j);
            scanf("%d",&a[i][j]);
            }

            }
    for(int i=0;i<m;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(i>=j)
                {
                s=s+a[i][j];
            }
        }
    }
    printf("Sum of upper triangular matrix = %d",s);
}