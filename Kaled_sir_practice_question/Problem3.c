#include <stdio.h>

int main()
{    
    int menu_choice ; float transaction_ammount ; 
    
     float initial_balance = 500.00;
    
    printf("\nMenu choice(1 for check Balance, 2 for Deposit, 3 for Withraw , 4 for Exit) :");
    scanf("%i" , &menu_choice );
    
     if (menu_choice==1 )
    {printf("\nCheck Balance");}
    
    else if (menu_choice==2 )
    {printf("\nDeposit");}
    
    else if (menu_choice==3 )
    {printf("\nWithraw");}
    
    else if (menu_choice==4 )
    {printf("Exit");}
    
    else 
   { 
    printf("Invailed");
    }
      
   
     if (menu_choice==1 )
            { 
            printf("\ninitial_balance =$%.2f", initial_balance);
            }
    else if (menu_choice==2 ) {
    
     
      {  printf("\ndiposit_ammount=$");

        scanf("%f" , &transaction_ammount);
      }
      
             
                
                if (transaction_ammount > 0)
                {
                    initial_balance= initial_balance + transaction_ammount;
                    printf("Add to balance := %.2f", initial_balance);
                }   
                
                else
                {
                    printf("Invailed Ammount");
                }
            }      
            
       else  if (menu_choice==3 ) {
            { 
            printf("\nInput the withdral ammount=$");
            scanf("%f" , &transaction_ammount);
            }
    
   
 
                if (transaction_ammount <=0) {

                    printf("\nAmmount  invailed");
                }
                else if (transaction_ammount > initial_balance)
                {
                    printf("\nInsufficient Funds");
                }
                else 
                {
                    initial_balance = initial_balance - transaction_ammount;
                    printf("Current Balance = $%.2f", initial_balance);
            }    }
  
     else if (menu_choice==4)
    {
        printf("\nThank You");
    }
     else 
     {
        printf(" Invailed menu");
     }


    return 0;
}