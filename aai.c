#include <stdio.h>

int main (void){
    int four, a1, a2, a3, a4;
    printf("%s\n", "Please insert a 4 digit number");
    scanf("%d", &four);
    a1 = (four / 1000 + 7) % 10;
    a2 = (four % 1000 / 100 + 7) % 10;
    a3 = (four % 100 / 10 + 7) % 10;
    a4 = (four % 10 + 7) % 10;
    printf("%d%d%d%d\n", a3, a4, a1, a2);
}