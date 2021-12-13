#include<stdio.h>
#include<math.h>
main()
{
	int x1,x2,y1,y2,z;
	printf("enter values of x1,x2,y1,y2\n");
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	z=sqrt((x2-x1)^2+(y2-y1)^2);
	printf("length of line is %d",z);
}
