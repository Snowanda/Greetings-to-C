#include <stdio.h>

int main (void){
    float lit;
    printf("%s\n","Please insert a number of liters");
    scanf("%f", &lit);
    printf("%.1f%s\n", lit*0.26418, "gal");
}