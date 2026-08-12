/*Take a temperature as input in Fahrenheit, convert it into Celsius and give output.
Then, take another temperature in Celsius, convert and output it in Fahrenheit. Use
formulas f = 9 × c/5 + 32 and c = (f − 32)/9, where f and c are the Fahrenheit
and Celsius temperatures respectively. Use appropriate data types in your program.*/ 


#include<stdio.h>
int main() {
    int c  ;
    printf("Enter the value of celsius :");
    scanf("%i", &c);        //input the celsius number
    int    f = 9*c/5 +32;
    printf("f = %i \n", f);     //output this celsias number convert to in fahrenheit
    {
         int f ;
    printf("Enter the value of Fahrenheit :");
    scanf("%i", &f);            //input the fahrenheit number
    int    c = ( f -32)/9;
    printf("c = %i \n", c);     //output this fahrenheit number convert to in celsius
    }


    return 0;
}