#include<stdio.h>
void main()
{
	char ch='z';
	void *c=&ch;
	printf("%d\n",c);
	printf("%c\n",*((char*)c));
}
