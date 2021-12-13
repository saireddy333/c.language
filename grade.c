#include<stdio.h>
main()
{
	int a;
	printf("enter your marks\n");
	scanf("%d",&a);
	if(a>=90)
	{
		printf("your grade is A");
	}
	else if (a>=80)
	{
		printf("your grade is B");
	}
	else if (a>=70)
	{
		printf("your grade is C");
	}
	else if (a>=60)
	{
		printf("your grade is D");
	}
	else if (a>=50)
	{
		printf("your grade is E");
	}
	else
	{
		printf("your grade is F");
	}
}
