#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2; i<=x; i++){        // claculate factorial  4! = 4* 3* 2* 1 
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r){   
 int ncr = factorial(n)/(factorial(r)*factorial(n-r));
   return ncr;
}
int main(){

    int n ;
    printf("Enter the 1st number :");
    scanf("%d", &n);
   for(int i=0; i<=n; i++){          // triangle er form
      for(int k = 0; k < n-i; k++)
        {
            printf("  ");
        }
    int first =1;
    printf("%d ",first);
    for(int j=0; j<=i; j++){
        int icj= combination(i,j);
        printf(" %d ", icj);
    }
    printf("\n");
   }
  


    return 0;
}