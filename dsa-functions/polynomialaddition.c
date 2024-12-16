#include <stdio.h>
int main()
{
    int a[50], b[50], n, m, sum[50], i, j;

    printf("enter the size of the array A:\n");
    scanf("%d", &n);

    printf("enter the size of the array B:\n");
    scanf("%d", &m);

    printf("enter the elements of array A:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the elements of array B:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    if (n >= m)
    {
        j = n;
    }
    else
    {
        j = m;
    }
    if (n >= m)
    {
        for (i = 0; i < n; i++)
        {
            sum[i] = a[i];
        }
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            sum[i] = b[i];
        }
    }
    if (n >= m)
    {
        i = 0;
        while (i < j)
        {
            sum[i] = sum[i] + b[i];
            i++;
        }
    }
    else
    {
        i = 0;
        while (i < j)
        {
            sum[i] = sum[i] + a[i];
            i++;
        }
    }

    printf("First polynomial is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i != 0)
            printf(".x^%d", i);
        if (i != n - 1)
            printf(" + ");
    }

    printf("\n Second polynomial is:\n");
    for (i = 0; i < m; i++)
    {
        printf("%d", b[i]);
        if (i != 0)
            printf(".x^%d", i);
        if (i != m - 1)
            printf(" + ");
    }

    printf("\n Polynomial after addition is:\n");
    for (i = 0; i < j; i++)
    {
        printf("%d", sum[i]);
        if (i != 0)
            printf(".x^%d", i);
        if (i != j - 1)
            printf(" + ");
    }
    return 0;
}
