#include <stdio.h>

int main(){
   int n ;
   scanf("%d",&n);
   int a = 100;
   
    for(int i=1;i<=n; i++) //for(int i=1;a>0; i++)
    {
        printf(" %d", a);
        a= a/2;
    }
    //printf("\n");
   



    return 0;
}



