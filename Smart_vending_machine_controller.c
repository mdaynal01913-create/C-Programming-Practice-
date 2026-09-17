#include <stdio.h>

int main(){

    int item_code , stoke;
    float chips=1.50, soda=2.00, candi=1.25, ammount;
    
         while(1)
            { 
    printf("Item 1: Chips — $1.50 (Stock: 3)\n");
    printf("Item 2: Soda — $2.00 (Stock: 2)\n");
   printf("Item 3: Candy — $1.25 (Stock: 4) \n");
        
      printf("Enter the item code (1 - 3) enter 0 to quit the program:");
      scanf("%i", &item_code);

       if (item_code==0)
           {
            break;
           }

      if (item_code==1)
          //chips = 1.50;
      {   
        printf(" Per paket is =$%.2f\n", chips);
        printf("You selected chips :\nEnter the number off product :"); 
        scanf("%i", &stoke); 
                {     if (stoke <=3 && stoke > 0)
                    
                        
                    {  ammount = chips * stoke;
                        printf("Stoke in Aviable\n");
                    }
                  else 
                    {  
                         printf("Out of stoke\n");
                    }
                     printf("Total ammount = $ %.2f\n" , ammount);
                        return 1; }
                 
      }
     else if (item_code==2)
      {
        printf("You selected soda \nEnter the number off product :"); 
        scanf("%i", &stoke); 
                { 
                    if (stoke <=2 && stoke > 0)
                    
                    {  ammount = soda * stoke;
                    printf("Stoke in Aviable\n");
                    }
                    else{
                        printf("Out of stoke\n");
                    } 
                    
                    printf("Total ammount = $ %.2f\n" , ammount);
                    return 1;}
          
      }
      else if (item_code==3)
      {
        printf("You selected candi :\nEnter the number off product :"); 
        scanf("%i", &stoke);
                    {  
                    if (stoke <=4 && stoke > 0)
                    {   ammount = candi * stoke;
                        printf("Stoke in Aviable");
                        }
                        else{
                            printf("Out of stoke");
                        }
                        printf("Total ammount = $ %.2f\n" , ammount);
                        return 1; }
                    
        
      }
      else {  
        printf("ERROR CODE\n"); return 1;
       }
    } 
      printf("Invailed item code\n");



            
    return 0;
}