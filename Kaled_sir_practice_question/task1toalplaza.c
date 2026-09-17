#include <stdio.h>

int main(){
    int Vehicle_code ; 
    float base_rate , fainal_ammont ;
        printf("Enter the Vehicle code :");
            scanf("%i", &Vehicle_code);
             
            if (Vehicle_code ==1)
                    {base_rate=200;
            
                   printf("\nMotor_bike");}
           
                        else if (Vehicle_code ==2) 
                        {base_rate=500.00;
                        printf("\ncar");} 
                         
                       else if (Vehicle_code==3) {base_rate=700.00;
            
                            printf("\nBus");}  

                            else if (Vehicle_code==4) {base_rate=700.00;
                                
                            printf("\nTruck");}
                        
            
                            else
                            

                                printf("Unvailed");
                

                             int status;
                                printf("\nEnter the code of status (1: Local Resident, 0: Regular): ");
                                scanf("%i", &status);
                                if (status==1)                  
                                    printf("Local Residents");
                                else if(status==0)
                                printf("Regular");
                                else
                                printf("invailed");


                            int hour ;
                            fainal_ammont = base_rate;
                        
                                printf("\nEnter peak hour rate time ( 0-23) :");
                                scanf("%i", &hour);
                                  if (hour < 0 || hour > 23) {     // Check if the entered hour is invalid (outside the range of 0 to 23
                                    printf("Invalid Hour!\n"); // Print error message for invalid hour input
                                
                                }
                                if ((hour >= 7 && hour <= 9) || (hour >= 17 && hour <= 19)) {
                                       fainal_ammont = fainal_ammont + (base_rate * 0.20);  // 20% surcharge for peak hours (7 to 9 AM and 5 to 7 PM / 17 to 19)
                                    }
                                    if (status == 1) {
                                        fainal_ammont= fainal_ammont - (fainal_ammont * 0.50);  // 50% discount for local residents
                                                                    }
                            printf("Base Rate: %.2f TK\n", base_rate);
                            printf("Fainal_Ammont: %.2f TK\n", fainal_ammont);
                                                            
                                    
    







    return 0;
}