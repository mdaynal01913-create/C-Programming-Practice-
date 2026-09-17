#include <stdio.h>

int main(){
            int n ;
            printf("Enter a number rows :");                                      //nested loops ek loop er vitor loops
              scanf("%d", &n);
            //   printf("Enter a number of colums :");                                      //nested loops ek loop er vitor loops
            //   scanf("%d", &m);
              //*** ... uo to of stars
              //int a=n;
              for (int i=1 ; i<=n;i++){  // uter loop  no: of  line //rows line

              for (int j= 1 ; j<=n+1-i; j++){  // inner loops no of stars in each line //colums line
              printf("*");
              }
            //  a--;
              printf("\n");        //j+i= n+1 
            }
    return 0;
}