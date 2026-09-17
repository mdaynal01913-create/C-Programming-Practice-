#include <stdio.h>

int main(){
    float units_consumed , peak_hours_usage , account_type , bill , discount;
     printf("Units_consumed(kwh) :");
     scanf("%f", &units_consumed);
     
     printf("\nPeak_hours_usage(1 for High peak, 0 for Normal ) :");
      scanf("%f", &peak_hours_usage);
      if (peak_hours_usage==1)
      { 
          printf("High Peak");
      }
        else   if (peak_hours_usage==0)
      { 
          printf("Normal");
      }
        else
         printf("Unvailed");
      
      printf("\nccount_type( 1 for subsidized low income, 0 foe standard):");
      scanf("%f", &account_type);
      
     
          if (account_type==1)
   {
          printf("subsidized low income");
          
     }
     else  if (account_type==0)
      {
          printf("Standard");
      }
          else
            printf("Unvailed");
            
            
      
      if (units_consumed<=100)
      { bill = units_consumed *0.10;
          
      }
      
      
      else if (units_consumed > 100 && units_consumed <=200  )
      { bill = (100*0.10) + (units_consumed- 100) *0.15;
          
      }
      
      else if (units_consumed>200)
      { bill = (100*0.10) + (100 *0.15) + (units_consumed -200) *0.25;
          
      }
      
      
     
     if (peak_hours_usage==1)
     {
     bill = bill + 15.00;
     }
     
    if (account_type==1)
    {
        discount = bill * 0.20;
        bill = bill - discount;
    }
    printf("\nFainal Bill = $%.2f", bill);
    
    
    
    return 0;
}


