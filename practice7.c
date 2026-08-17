#include<stdio.h>
int main(){
    int d1, m1 , y1;
    int d2 , m2 ,y2;
     const int months_in_year=12;
     const int day_in_months=30;
      printf("Enter the date1 :\n");
      printf("d1 =");
      scanf("%i", &d1 );
      printf("m1 = ");
      scanf("%i", &m1 );
      printf("y1 =");
      scanf("%i", &y1 );

      printf("Enter the date2 :\n");
      printf("d2 =");
      scanf("%i", &d2 );
      printf("m2 = ");
      scanf("%i", &m2 );
      printf("y2 =");
      scanf("%i", &y2 );

    
    int totaldays1 = d1 + (m1*30);
    int totaldays2 = d2 + (m2*30);
    int totalyearsdays = (y2 - y1 )*365 + totaldays1 + totaldays2;
    printf(" totaldays = %i", totalyearsdays);

    
    int years = totalyearsdays /365;
    int months = (totalyearsdays%365)/30;
    int days = totalyearsdays%30;
    printf("\n years=%i months=%i days=%i", years , months, days);

    

      



    return 0;
}