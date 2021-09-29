#include <stdio.h>

int main (void){
    int a1, a2;
    printf("%s\n", "Please insert two whole numbers no more than 1000");
    scanf("%d%d", &a1, &a2);
    if(a1 > 1000 || a2 > 1000){
        printf("%s\n", "Read the instruction !");
    }
    else{
        printf("%d%s%d%s%d\n", a1, "+", a2, "=", a1 + a2);
        printf("%d%s%d%s%d\n", a1, "*", a2, "=", a1 * a2);
        printf("%d%s%d%s%d\n", a1, "-", a2, "=", a1 - a2);
        printf("%d%s%d%s%d%s%d\n", a1, "/", a2, "=", a1 / a2, "...", a1 % a2);
    }
}