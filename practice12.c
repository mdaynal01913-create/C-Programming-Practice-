
/*Compute the value of the expression below. For this, use the least number of
variables in the program. Also, use only one arithmetic operator and one
assignment operator in each statement. Give the final result as the output.
(5 + 6 ∗ 9/3 − (3 + 8 × (−(1 + 2)))) + 3 × (5 + 6)*/


#include <stdio.h>

int main(){
    int a, b;
                 // prosses 1 solved =(5 + 6 ∗ 9/3
                a=6*9;
                a= a/3;
                a= a+5;
                        //  prosses 2 solved =(3 + 8 × (−(1 + 2)
                b = 1+2;
                b =-b;
                b = 8*b;
                b = 3 + b;

                a = a-b;
                         // prosses 3 solved =3 × (5 + 6)
                b= 5+6;
                b= 3*b;
                 a= a+b;
            printf("Fainal result = %i", a);



    return 0;
}
