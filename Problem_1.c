#include <stdio.h>

int main(){
    float height , weight , body_mass_indesx ;
    printf("Enter your height (kg) =");
    scanf("%f" , &height);

      printf("Enter your weight (kg) =");
    scanf("%f" , &weight);

     body_mass_indesx= weight/(height*height);
         
       if (body_mass_indesx >= 18.5 && body_mass_indesx <=25)
       {
        printf("You are helthy");
       }


        else if (body_mass_indesx < 18.5 )
       {
        printf("You are underweight");
       }
         
      else if ( body_mass_indesx > 25)
       {
        printf("You are overweight");

       }

       else
       {
        printf("Cheak your previous information");
       }
       


    return 0;
}