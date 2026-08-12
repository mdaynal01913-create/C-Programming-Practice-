/*Take hours, minutes, and seconds as input and convert them into seconds and give
output. Also, take the seconds as input, and convert them into hours, minutes, and
seconds, and give output. For these, use self referential and compound assignments.*/


#include <stdio.h>

int main()
{   
    int hour , minutes, second;
    printf("Enter the hour:");
    scanf("%i",&hour);                       //take input hour
    printf("Enter the minutes:");
     scanf("%i",&minutes);                  //take input minutes
    printf("Enter the sacond:");
     scanf("%i",&second);                       // take input second
     int totalsecond=(hour*60*60)+(minutes*60)+second;  //output the totall second
    
    printf("totalsecond = %i",totalsecond);
    {
        int second;                             //intut any second convet to hr min sec
            printf("\n Enter the second:");
            scanf("%i", &second);           //input second
        int hour = 1*second/3600;       //we know that 1 hr = 3600 sec
        int x = second%3600;         //we need a extra int variable because we take any input of sec we needed remainder.
        int minutes = x/60;     //without hr of sec , What we currently have this sec/60
        int seconds = x%60;     //without hr of sec , What we currently have, this number remainder is seconds
             printf("%i hour %i minutes %i seconds ", hour ,minutes , seconds);



    }

    return 0;
}