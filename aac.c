#include <stdio.h>

int main (void){
    float C;
    printf("%s\n","Please insert a celsius degree");
    scanf("%f",&C);
    printf("%.2f%s\n", C*9/5+32, "°F");
}