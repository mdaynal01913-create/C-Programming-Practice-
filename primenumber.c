#include<stdio.h>

int main(){
   int n ;
   scanf("%d",&n);
   int a = 100;
   
    for(int i=2;i<=n-1; i++) //for(int i=1;a>0; i++) 
    {
        printf(" %d", a);
        a= a/2;
    }
    //printf("\n");
   



    return 0;
}