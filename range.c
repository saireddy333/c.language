#include<stdio.h>
#include<limits.h>
main()
{
	printf("size of integer=%d\n",sizeof(int));
	printf("max of integer=%d\n",INT_MAX);
	printf("min of intrger=%d\n",INT_MIN);
	printf("size of char=%c\n",sizeof(char));
	printf("max of char=%c\n",CHAR_MAX);
	printf("min of char=%c\n",CHAR_MIN);
	printf("size of float=%f\n",sizeof(float));
	printf("max of float=%f\n",FLOAT_MAX);
	printf("min of float=%f\n",FLOAT_MIN);
	printf("size of double=%1f\n",sizeof(double));
	printf("max of double=%1f\n",DOUBLE_MAX);
	printf("min of double=%1f\n",DOUBLE_MIN);
}
