#include <stdio.h>

int main (void){
    float g;
    printf("%s\n", "Please insert a number of grams");
    scanf("%f", &g);
    printf("%.1f%s\n", g/600, "台斤");
}