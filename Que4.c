#include<stdio.h>
int main()
{
	int a[50],i,n,l,s;
	printf("Enter a number of elements:\n");
	scanf("%d" ,&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	scanf("%d" ,&a[i]);
	l=s=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>l)
		l=a[i];
		if(a[i]<s)
		s=a[i];
	}
	printf("The smallest element is: %d\n",s);
	printf("The largest element is: %d\n",l);	
		return 0;
}
