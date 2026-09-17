#include <stdio.h>

int main() { 
    int Vehicle_code; 
    float base_rate; 

    printf("Enter the Vehicle code : "); 
    scanf("%i", &Vehicle_code); 

    if (Vehicle_code == 1) {
        base_rate = 200; 
        printf("\nMotor_bike"); 
    }
    else if (Vehicle_code == 2) {
        base_rate = 500.00; 
        printf("\ncar"); 
    }
    
    else if (Vehicle_code == 3) {
        base_rate = 700.00; 
        printf("\nBus"); 
    }
    else if (Vehicle_code == 4) {
        base_rate = 700.00; 
        printf("\nTruck"); 
    }
    else {
        printf("\nInvalid Vehicle Code");
    }

    return 0;
