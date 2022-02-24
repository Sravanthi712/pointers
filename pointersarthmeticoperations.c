#include<stdio.h>
void main()
{
	
	int a;
	int b;
	scanf("%d%d",&a,&b);
	int *p1;
	int *p2;
	p1=&a;
	p2=&b;
	printf("%d\n",p1);
		printf("%d\n",p2);
		printf("%d\n",*p1+*p2);
		printf("%d\n",*p1-*p2);
		printf("%d\n",*p1**p2);
		printf("%d\n",(*p1)/(*p2));
		printf("%d\n",(*p1)%*p2);
		
	}
