//Define two integer variables and take their values as input by giving appropriate
//input prompts. Then, give output of their sum, difference, product, quotient, and
//remainder with appropriate output descriptions. Moreover, do something to get the
//division result as a fraction and then give that as an output.


#include<stdio.h>


int main()

{
	int a, b, sum, Difference, Product, Quotient ;
	float Remainder ;
	printf("Enter the first number :");
	scanf("%i", &a);
   printf("Enter the second number :");
   scanf("%i", b);
   sum = a+b;
   Difference= a-b;
   Product = a*b;
   Quotient = a/b;
   Remainder = (a*Quotient) - b;
   printf (" %i %i %i %i %f", sum,  Difference, Product, Quotient, Remainder);
   return 0;
	
}

