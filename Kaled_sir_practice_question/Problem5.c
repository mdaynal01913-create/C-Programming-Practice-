#include <stdio.h>

int main(){

    int vehicle_type, zone_code,congestion_charge;
      float entry_hour , duration_hour, t_D_in_hour , hourly_rate;

      float base_rate , total_ammount , end_of_hour;
        printf("Vehicle Type (1 for Electric Vehicle, 2 for Sedan/SUV, 3 for Heavy Van:):");
        scanf("%i", &vehicle_type);

        if (vehicle_type==1 )
            {printf("Electric Vehicle");}
            
            else if (vehicle_type==2 )
            {printf("Sedan/SUV");}
            
            else if (vehicle_type==3 )
            {printf("Heavy Van");}




        printf("Zone Code (1 for Commercial/Downtown, 2 for Residential, 3 for Airport:):");
        scanf("%i", &zone_code);

        if (zone_code ==1 )
            {printf("Commercial/Downtown");}
            
            else if (zone_code==2 )
            {printf("Residential");}
            
            else if (zone_code==3 )
            {printf("Airport");}


        printf("\nEntry Hour (0=< hour >=23)\n");
         scanf("%f" , &entry_hour);


         printf("Enter Duration (hours): ");
               scanf("%f", &duration_hour);


         if ( entry_hour <=0 && entry_hour >=23)
         {
             printf("%f", entry_hour); 
          }
              else if (duration_hour<0)
              {
                printf("invailed %f", duration_hour);
                //return 0;
              }

 
         if (zone_code==1)
              {
                if(vehicle_type==1)
                  hourly_rate= 2.00;
                if(vehicle_type==2)
                  hourly_rate= 5.00;
                if(vehicle_type==3)
                  hourly_rate= 10.00;
              }
        else if (zone_code==2)
             {
                if(vehicle_type==1)
                  hourly_rate= 1.00;
                if(vehicle_type==2)
                  hourly_rate= 3.00;
                if(vehicle_type==3)
                 {
                    printf("Entry Denied");
                    return 0;
                 }


             }
             
        else if (zone_code==3)
        {
            if(vehicle_type==1)
                  hourly_rate= 4.00;
                if(vehicle_type==2)
                  hourly_rate= 6.00;
                if(vehicle_type==3)
                  hourly_rate= 8.00;
                  
        }

        else { 
            printf("invailed");
             }
       
      {  
        if (duration_hour <=2)
        {
          total_ammount = duration_hour * hourly_rate;
        }
        else if (duration_hour >=3 && duration_hour <=5)
        {
          total_ammount = (2*hourly_rate) + ((duration_hour - 2) *(hourly_rate + (hourly_rate * 0.50)));
      
        }

         
        else if  (duration_hour >5)
        {
          total_ammount = (2*hourly_rate)+(3*(hourly_rate* 1.50)) + ((duration_hour - 5) *15.00) ;
        }

        else 
        printf("unvailed");
           
       }    
        end_of_hour = ((int)entry_hour +(int) duration_hour) % 24;

           if ((entry_hour >= 7 && entry_hour < 9) || (end_of_hour > 7 && end_of_hour <= 9) ||
              (entry_hour >= 16 && entry_hour < 19) || (end_of_hour > 16 && end_of_hour <= 19)) 
              {
              congestion_charge = 1;
               }

           if (entry_hour >= 16 && end_of_hour < 19)
           {
            congestion_charge = 1;
           }

           total_ammount = total_ammount + 8.00;
           if (vehicle_type==1){
            total_ammount = total_ammount * 0.800;
            if (total_ammount > 25.00)
            {
              total_ammount = 25.00;
            }

           }
           

           printf("base rate:=$%.2f/hr\n" , hourly_rate);
           printf("Total parking cost =$%.2f\n" , total_ammount);




    return 0;
}