#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n*2;j++)
        {
            if(i+j==n+1||j-i==n-1)
            {
                printf("*");
            }
         
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n*2;j++)
        {
            if(i==j||i+j==n*2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
   
    return 0;
}
