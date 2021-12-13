#include<stdio.h>
main()
{
	float side,perimeter,area;
	printf("enter side of square\n");
	scanf("%f",&side);
	area=side*side;
	perimeter=4*side;
	printf("area of square %f\n",area);
	printf("perimetre of square %f",perimeter);
}
