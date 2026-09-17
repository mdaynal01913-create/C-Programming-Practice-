#include <stdio.h>

int main(){
    int domestic_zone , shipping_service;
    float fainal_ammount , weigth_charges, s_s_charge;
    float package_weight , base_rate;
         printf("Destination Zone (1 for Domestic, 2 for Regional, 3 for International) :");
        scanf("%i" , &domestic_zone );


       
    
            if (domestic_zone==1 )
            {printf("Domestic");}
            
            else if (domestic_zone==2 )
            {printf("Regional");}
            
            else if (domestic_zone==3 )
            {printf("International");}

                   
        printf("shipping_service (1 for Standard, 2 for Express , 3 for Same day:)");
        scanf("%i", &shipping_service);

            if (shipping_service==1 )
            {printf("Standard");}
            
            else if (shipping_service==2 )
            {printf("Express");}
            
            else if (shipping_service==3 )
            {printf("Same day");}

                            printf("Enter the packege of weight (kg): ");
                            scanf("%f", &package_weight);


            switch (domestic_zone) {

                    case 1:  //Domestik 
                     base_rate = 5.00;
                     //break;
             switch (shipping_service) {
                    case 1: //1 for standard
                    s_s_charge=0.00;
                    break;
                    case 2: //  2 for Express 
                    s_s_charge = 10.00;
                    break;
                    case 3 : // 3 input for same days
                    s_s_charge   = 25.00;
                    break;
                default:
                   printf("Invailed service this zone \n");
                    return 0;
                 }
            } 
            switch (domestic_zone){
                   case 2: // FOr regional
                   base_rate=15.00;
                   //break; 
                switch (shipping_service)
                {
                   case 1: //1 for standard
                    s_s_charge=0.00;
                    break;
                    case 2: //  2 for Express 
                    s_s_charge = 20.00;
                    break;
                    case 3 : // 3 input for same days is unvailed
                    printf(" Same day is unvailed\n");
                    return 0;
                 default:
                   printf("Invailed service this zone \n");
                    return 0;
                }   

            }
             

          
           switch (domestic_zone){
                   case 3: // FOr International
                   base_rate=40.00;
                  // break; 
                switch (shipping_service)
                {
                   case 1: //1 for standard
                    s_s_charge=0.00;
                    break;
                    case 2: //  2 for Express 
                    s_s_charge = 35.00;
                    break;
                    case 3 : // 3 input for same days is unvailed
                    printf(" Same day is unvailed\n");
                    return 0;
                 default:
                   printf("Invailed service this zone \n");
                    return 0;
                }
                break;
           }

                  
                       // no.2 weigth  surcharges
               if (package_weight <= 2)
               {  
                weigth_charges = 0.00; // no extra fee       
                }
                else if (package_weight > 2 && package_weight<= 10) //add $2.00 per kg for weight exceding 2 kg
                {
                    weigth_charges = (package_weight -2 ) * 2.00 ;
                }
                    else if  (package_weight > 10) //add $16.00 ( for the first 8 kg overage) plus $5.oo for every kg 10 kg
                    {
                        weigth_charges = 16 + (package_weight - 10) * 5.00;
                    }
              if (package_weight > 30)
               {  
                printf("Reject any package over 30 kg regardless of zone:\n");
                
               }
     
          fainal_ammount = base_rate + weigth_charges + s_s_charge ;
          
          printf(" weight cost:= $%.2f \n" , weigth_charges);
            printf("Base rate := $%.2f\n" , base_rate);
            printf("Service Charge := $%.2f\n", s_s_charge);
            
            printf("Fainal shiping cost := $%.2f\n", fainal_ammount);
           



    return 0;
}