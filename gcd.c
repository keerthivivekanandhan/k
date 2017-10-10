#include <stdio.h>

int main(int argc, char *argv[])
{
  int p,q,i=1,j=1,c[10],k=0,gcd;
  p=atoi(argv[1]);
  q=atoi(argv[2]);
  while(i<=p||j<=q)
  {
      if(p%i==0&&q%j==0)
      {
         c[k]=i;
         k++;
      }
      i++;j++;
  }
  for(i=0;i<k;i++)
  {
      for(j=0;j<k;j++)
      {
      if(c[i]>c[j+1])
      {
         gcd=c[i];
      }
      }
  }
  printf("%d",gcd);
}
