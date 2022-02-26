#include<stdio.h>
int fact(int n)
{
	//base case
	if(n==0)
	{
		return 1;
	}
	else
	{ 
	return n*fact(n-1);
	}
}
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return (fib(n-1)+fib(n-2));
	}
}
int main()
{
	int n;
	int i;
	printf("enter a number");
	scanf("%d",&n);
	printf("factorial of %d:%d\n",n,fact(n));
	printf("fibonacci of %d:",n);
	for(i=0;i<n;i++)
	{
		printf("%d,fib(i)");
	}
	return 0;
}

