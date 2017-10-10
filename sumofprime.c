#include <stdio.h>

int main()
{
    int i,j,n,m,k=0,sum=0;
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
        k=0;
        for(j=1;j<=m;j++)
        {
        if(i%j==0)
        {
        k++;
        }
        }
        if(k==2)
        {
            sum=sum+i;
            
        }
    }
    printf("%d",sum);
    return 0;
}
