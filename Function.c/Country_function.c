#include <stdio.h>
void bangladesh(){
    printf("You are in BANGLADESH\n"); //
   //
  
    return;
}
void pakistan(){
    printf("You are in pakistan\n");
    bangladesh();
    return;
}
void india(){
    printf("You are in india\n");
    pakistan();
  
    return;
}
int main(){
    india(); // jeta ekane dibo seta nice takte hobe , and mane serial wise upore takte hobe 
 // jemn india er vidore jabe then pakistan then bangladesh ei rokom vabe serial maintai n korte hobe
 



    return 0;
}