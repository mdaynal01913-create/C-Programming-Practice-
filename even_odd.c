#include <stdio.h>

int main(){
    int n =0;

    while (n<15)
    {
        n=n+1; //protibar 1 ore increased hobe and cheak orbe condition
        if (n% 2 ==0)
        {
            continue;  //When the `continue` statement is executed, the remaining part of the loop body is skipped.
        }
        printf(" %d",n);
    }
    




    return 0;
}