#include<stdio.h>;
main()
{
	char ch;
	printf("enter a character\n");
	ch=getchar();
	printf("ascii code is %d\n",ch);
	ch++;
	putchar(ch);
}
