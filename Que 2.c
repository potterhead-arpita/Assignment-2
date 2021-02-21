#include<stdio.h>
int main()
{
	int i,n,e=0,ev=0,a[10];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter element:" ,n);
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		e+=a[i];
		if((i+1)%2==0)
		ev+=a[i];
	}
	printf("sum of even elements:%d \n" ,e);
	printf("sum of the even position elements:%d \n",ev);
	return 0;
}
