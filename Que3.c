#include <stdio.h>
int main()
{
	char str[10];
	int i,c=0;
	printf("Enter a string\n");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			c++;
		}
	}
	printf("Number of words = %d",c+1);
	return 0;
}
