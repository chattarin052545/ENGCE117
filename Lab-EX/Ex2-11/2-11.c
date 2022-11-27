#include <stdio.h>

void main()
{   long int n , i, t= 9;
	int sum = 0;
	printf(" User input: ");
	scanf(" %d ", &n);
	printf("---------------------------------------------------------\n");	
	printf(" Series = ");
	for (i=1 ;i<=n ;i++)
	{ sum += t;
	  printf(" +%ld ",t);
	  t=t*10+9;
	}//end number output
	printf("\n Sum = %d \n ",sum);
}//end progarm