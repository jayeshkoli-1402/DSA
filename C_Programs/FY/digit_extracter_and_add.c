#include<stdio.h>
void main()
{
	int nummber,add,unit,tens,hundres,thousands;
	printf("Enter a four digit number: \n");
	scanf("%d",&number);
	
	 unit =num%10;
	 num =num/10;
	 tens =num%10;
	 num =num/10;
	 hundres =num%10;
	 num =num/10;
	 thousands =num%10;
	 
	 
	 add =unit+tens+hundres+thousands;


	 printf("unit place digit: %d\n",unit);
	 printf("tens place digit: %d\n",tens);
	 printf("hundreds place digit: %d\n",hundres);
	 printf("thousands place digit: %d\n",thousands);
	 
	 
	 
	 printf("Addition of digits is: %d\n",add);
	 
}
