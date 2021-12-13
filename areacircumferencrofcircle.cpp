#include<stdio.h>
main()
{
	float radius,circumference,area,pi;
	printf("enter radius of circle\n");
	scanf("%f",&radius);
	pi=(22.0/7.0);
	area=pi*radius*radius;
	circumference=2*pi*radius;
	printf("area of circle %f\n",area);
	printf("circumference of circle %f",circumference);
}
