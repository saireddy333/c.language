#include<stdio.h>
main()
{
	int a;
	printf("enter a value\n");
	scanf("%d",&a);
	if (a==0)
	{
	    printf("given number is zero");
	}
	else if (a<0)
	{
		printf("given number is negative");
	}
	else
	{
		printf("given number is positive");
	}


	
}
