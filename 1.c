#include <stdio.h>
int main(){
    int months,days;
    printf("ENETER THE NUMBER OF DAYS= ");
    scanf("%d",&days);
    months= days/30;
    days= days%30;
    printf("MONTHS= %d \nDAYS= %d",months,days);
}
