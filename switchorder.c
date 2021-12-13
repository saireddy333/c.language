#include<stdio.h>
main()
{
	int n;
	char ch;
	printf("enter b-burger f-frenchfries p-pizza s-sandwich\n");
	scanf("%c",&ch);
	printf("enter no.of orders\n");
	scanf("%d",&n);
	switch(ch)
	{
		case 'b':
	        printf("bill=%d\n",n*200);
	        break;
	    case 'f':
	    	printf("bill=%d\n",n*50);
	    	break;
	    case 'p':
	    	printf("bill=%d\n",n*500);
	    	break;
	    case 's':
	    	printf("bill=%d\n",n*150);
	    	break;
	    default :
	    	printf("order not avaliable");
	}
}
	

