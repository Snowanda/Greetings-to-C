#include <stdio.h>
#include <stdlib.h>

int main (void){
    int a1, a2;
    printf("%s\n", "Please insert two whole numbers with absolute value smaller than 106");
    scanf("%d%d", &a1, &a2);
   if (abs(a1) >= 106 || abs(a2) >= 106) {
       printf("%s\n", "Read the instruction !");
   }
   else {
       printf("%d\n", a1+a2);
   } 
}