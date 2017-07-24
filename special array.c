
#include <stdio.h>
int main(void) {
int N,a[N],m,n,i,j,count=0,b[N];
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
n=a[i];
{
for(j=0;j<N;i++)
{
m=a[j];
while(m!=n)
{
if(m>n)
m=m-1;
else
m=m+1;
count++;	
}
}
}	
b[i]=count;
for(i=0;i<N;i++)
{
printf("%d",&b[i]);
}
}
return 0;
}
