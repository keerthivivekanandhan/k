#include<stdio.h>
int main(int argc, char *argv[])
{
	int r;
	float area;
	r=atoi(argv[1]);
	area=3.14*r*r;
	printf("area of circle %0.2f",area);
}
