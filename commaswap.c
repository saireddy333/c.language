#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a,b values\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("after swaping a,b values are %d\t%d",a,b);
	
}
