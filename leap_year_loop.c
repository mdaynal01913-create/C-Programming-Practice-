#include <stdio.h>

int main(){
    int year_1, year_2, leap_year=0;
    printf("Enter the number :");
    scanf("%d", &year_1);

    printf("Enter the number :");
    scanf("%d", &year_2);
   if (year_1>year_2)
   {
    printf("Invailed input\n");
    return 0;
   }

   for( int i=year_1; i<=year_2; i++){  
    if (i% 400==0 || (i%4==0 && i%100 !=0 ))
   {
    leap_year++;
   }
  

}
 printf("Total leap years = %d\n", leap_year);

    return 0;
}