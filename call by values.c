#include<stdio.h>
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
void main()
{
	int a=10,b=20;
	printf("values before swap:%d %d\n",a,b);
	swap(a,b);
	printf("values after swap:%d %d",a,b);
}
