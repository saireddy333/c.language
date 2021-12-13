#include<stdio.h>
main()
{
  int a,b;
  char c;
  printf("enter c value\n");
  scanf("%c",&c);
  printf("enter a,b values\n");
  scanf("%d%d",&a,&b);
  switch(c)	
   {
   case '+':
   printf("sum of two number is %d",a+b);
   break;
   case'-':
   printf("difference between two number is %d", a-b);
   break;
   case'*':
   printf("multiplication of two number%d",a*b);
   break;
   case'/':
   printf("division of two number %d",a/b);	
   default:
   printf("c is not defined"); 
  }
}
