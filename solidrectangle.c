#include <stdio.h>

int main(){
            int n , m;
            printf("Enter a number :");                                      //nested loops ek loop er vitor loops
              scanf("%d", &n);
              printf("Enter a number :");                                      //nested loops ek loop er vitor loops
              scanf("%d", &m);
              //*** ... uo to of stars
              for (int i=1 ; i<=n;i++){  // uter loop  no: of  line
              for (int i= 1 ; i<=m; i++){  // inner loops no of stars in each line
              printf(" *");
              }
              printf("\n");
            }
    return 0;
}