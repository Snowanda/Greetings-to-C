#include <stdio.h>

int main (void){
    int cm, kg;
    printf("%s\n", "Please insert your height(cm) and weight(kg)");
    scanf("%d%d", &cm, &kg);
    printf("%s%.4f\n", "Height(inch):", cm/2.54);
    printf("%s%.4f\n", "Weight(pound):", kg/0.454);
}