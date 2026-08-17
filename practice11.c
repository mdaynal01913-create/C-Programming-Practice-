/*f the first term of an arithmetic series is a and the common difference is d, then the
second term is b = a + d, the nth term is t = a + (n − 1)d, and the sum of the first
n terms is s =
1
2
n{2a + (n − 1)d}. Take a, d, and n of an arithmetic series as input
and give the output in the format of a + b + . . . + t = s */

#include <stdio.h>

int main(){
       int a, b, d, n, t, s;
        printf("Enter the value : \n");
        printf("a =");
        scanf("%i", &a );
        printf("d = ");   // here d = every term increased number
        scanf("%i", &d);
        printf("n =");
        scanf("%i", &n ); // here n is term number

           b=a+d;       // here b is 2nd term
           t = a + (n -1)*d;
           s = (n * (2 * a + (n - 1) * d)) / 2;
           //s =  n/2 *(2*a + (n -1) *d);  if we use float then we can use this code 
           printf("%i + %i + ......+ %i = %i" , a , b , t, s);



    return 0;
}
