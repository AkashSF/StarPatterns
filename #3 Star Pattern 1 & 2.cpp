#include <stdio.h>
int main()
{
    int i, j, r;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
    printf("Pattern 1: \n");
    for(i=1; i<=r; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern 2: \n");
    for(i=1; i<=r; i++)
    { 
        
        for(j=i; j<r; j++)
        {
            printf(" ");
        }

        
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }

        printf("\n");
    }
    
    return 0;
}
