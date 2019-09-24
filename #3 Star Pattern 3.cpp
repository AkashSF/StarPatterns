#include <stdio.h>
int main()
{
    int i, j, r;
    int stars, blank;   
    scanf("%d", &r);
    stars = 1;
    blank = r - 1;
    for(i=1; i<r*2; i++)
    {
        for(j=1; j<=blank; j++)
            printf(" ");
        for(j=1; j<stars*2; j++)
            printf("*");
        printf("\n");
        if(i<r)
        {
            blank--;
            stars++;
        }
        else
        {
            blank++;
            stars--;
        }
    }
    
    return 0;
}
