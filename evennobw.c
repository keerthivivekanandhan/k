#include <stdio.h>
int main()
{
    int p,q,i;
    
    scanf(" %d %d ",&p,&q);
    for(i=p;i<=q;i++)
    {
        if(i%2==0)
        {
            printf(" %d ",i);
        }
    }
    return 0;
}
