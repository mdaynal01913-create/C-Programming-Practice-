/*Define three variables a, b, and c, and initialise them with different values. Next,
define an additional variable and use it in assignments such that after all the
assignments a’s value goes to b, b’s value goes to c, and c’s value goes to a. Write
the program in another way, where you will not use any additional variable. Rather
you will just use addition and subtraction and still get the same task performed.*/

#include <stdio.h>

int main(){
    int a , b , c ,x;
        a=10;
        b=20;
        c=30;
        x=a;        //additional variable
        a=c;
        c=b;
        b=x;
           printf("a=%i\n", a);
           printf("b=%i\n", b);
           printf("c=%i\n", c);




    return 0;
}