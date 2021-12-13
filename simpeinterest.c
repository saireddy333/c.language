#include<stdio.h>
main()
{
	float p,t,r,si;
	printf("enter p,t,r values\n");
	scanf("%f%f%f",&p,&t,&r);
	si=(p*t*r)/100;
	printf("simple interest is %f",si);
}
