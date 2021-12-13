#include<stdio.h>
main()
{
	int x,unitsplace;
	printf("enter a number\n");
	scanf("%d",&x);
	unitsplace=x%10;
	printf("units place of number is %d",unitsplace);
}
