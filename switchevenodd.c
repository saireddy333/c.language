#include<stdio.h>;
main()
{
	int a,k;
	printf("enter a value\n");
	scanf("%d",&a);
	k=a%2;
	switch (k)
	{
	case 0 :
	printf("even number");
	break;   
	case 1 :
	printf("odd number");
	break;
	default:
	printf("entered value is invalied");
    }
}
