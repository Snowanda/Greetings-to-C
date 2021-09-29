#include <stdio.h>

int main (void){
    float mi;
    printf("%s\n","Please insert a number of miles");
    scanf("%f", &mi);
    printf("%.2f%s\n", mi*1.6, "km");
}