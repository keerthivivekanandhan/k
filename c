# k
#include <stdio.h>

int main(void) {
 int white, black,g,n,k,x,y,z,t,a;
	
	scanf("%d",&t);
	if(1<=t&&t<=10){
	
	{
	for(a=1;a<=t;a++)
	{
	scanf("%d%d%d%d%d",&black,&white,&x,&y,&z);
	k=black*x +	white*y;
	g=black*y+white*y+black*z;
	n=black*x+white*x+white*z;
	if(x<y)
	{
	
	g;
	}
	else
	{
	
	 n;

	}
	if(k<g&&k<n){
		printf("%d\n",k);
		}
		else if(g<n)
		{ 
			printf("%d\n",g);
		}
		else
		{
			printf("%d\n",n);
		}
	}
	}
	}
	return 0;
}
