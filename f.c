#include<stdio.h>
void main()
{
int i,sum=1,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum*i;
}
printf("factorial no is:%d",sum);
}
