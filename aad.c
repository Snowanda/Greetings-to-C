#include <stdio.h>

int main (void){
    int a1, a2;
    printf("%s\n", "Please insert two whole numbers");
    scanf("%d%d", &a1, &a2);
    printf("%s%d\n", "Sum:", a1+a2);
    printf("%s%d\n", "Difference:", a1-a2);
    printf("%s%d\n", "Product:", a1*a2);
    printf("%s%.2f\n", "Quotient:", (float)(a1)/a2);
    printf("%s%d\n", "Remainder:", a1%a2);
}