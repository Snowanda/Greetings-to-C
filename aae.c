#include <stdio.h>

int main (void){
    int ch, ma, en;
    printf("%s\n","Please insert your score of the three subjects: Chinese, Math, and English");
    scanf("%d%d%d", &ch, &ma, &en);
    printf("%s%d\n", "Total:", ch+ma+en);
    printf("%s%d\n", "Average:", (ch+ma+en)/3);
}