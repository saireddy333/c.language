#include<stdio.h>
main()
{
	int a;
	printf("enter a value\n");
	scanf("%d",&a);
	if(a%3==0)
	{
		if(a%5==0)
	{
		printf("given number is divisible by 3 and 5");
	}
    }
	else
	{
		printf("given number is not divisible by 3 and 5");
	}
}
