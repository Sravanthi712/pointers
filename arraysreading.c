#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
}
