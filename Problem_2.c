#include <stdio.h>

int main(){
    int grate ;
    printf("Enter the number of subject :");
    scanf("%i", &grate);

    if ( grate >= 90)
    {
        printf("Grate A");
    }

     else if ( grate >= 80 && grate < 90)
    {
        printf("Grate B");
    }

    else if ( grate >= 70 && grate < 79)
    {
        printf("Grate C ");
    }

    else if ( grate >= 60 && grate < 69)
    {
        printf("Grate  D");
    }

    else if ( grate >= 50 && grate < 59)
    {
        printf("Grate F ");
    }
    else if ( grate < 50)
    {
        printf("Grate F");
    }
   else {

    printf("unvailed");
   }



    return 0;
}