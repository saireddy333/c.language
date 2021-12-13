#include<stdio.h>
main()
{
	int a,b;
	printf("enter value of a,b\n");
	scanf("%d%d",&a,&b);
	if (a>b)
	{
	    printf("value of a is maximum\n");
	    printf("value of b is minimum");
	}
	else
	{
		printf("value of b is maximum\n");
		printf("value of a is minimum");
	}
	
}
