/*For two linear simultaneous equations ax+by = c and px+qy = r, take a, b, c, p, q,
and r as input. Then, solve the two equations and give the values of x and y as output.
You can use the two formulas x = (cq −br)/(aq −bp) and y = (cp−ar)/(bp−aq)
in your program. Also, assume that aq ̸= bp for the input values*/


#include <stdio.h>
      int main(){
        float a, b, c;
         float p, q, r;
                    printf("Enter the a, b, c value : \n");
                    printf("a =");
                    scanf("%f", &a );
                    printf("b = ");
                    scanf("%f", &b );
                    printf("c =");
                    scanf("%f", &c );
        float x,y;

                x= (c*q - b*r)/(a*q-b*p);
                y=(c*p - a*r)/(b*p-a*q);
                   printf("\n x = %.2f", x);
                   printf("\n y = %.2f", y);


    




    return 0;
}