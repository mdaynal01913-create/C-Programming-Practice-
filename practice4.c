//Define two integer variables and take their values as input by giving appropriate
//input prompts. Then, give output of their sum, difference, product, quotient, and
//remainder with appropriate output descriptions. Moreover, do something to get the
//division result as a fraction and then give that as an output.


#include<stdio.h>


int main()

{
	int a, b, sum, Difference, Product ;
	float Quotien, Remainder ;          // I want to uotput in float.
	printf("Enter the first number :");
	scanf("%i", &a);                       // input first number
   printf("Enter the second number :");
   scanf("%i", &b);                       // input 2nd number
   sum = a+b;
   Difference= a-b;
   Product = a*b;                          // Division resulting in a fraction
   Quotien = (float) a/b;             
   Remainder = (float) (a % b);             
   printf ("  sum = %i\n", sum);
   printf (" Difference= %i\n", Difference);
   printf (" Product = %i\n", Product);
   printf ("Quotien = %.2f\n", Quotien);    // Quotien resulting in a fraction
   printf (" Remainder = %.2f", Remainder); //.2 means, Rounded to 2 decimal places
   return 0;
	
}