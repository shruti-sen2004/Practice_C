#include<stdio.h>
int main(){
    int year;
    printf("ENTER A YEAR= ");
    scanf("%d",&year);
    if (year%4==0 || year%400==0 && year%100 !=0){
        printf("IT IS A LEAP YEAR");
    }
    else{
        printf("IT IS NOT A LEAP YEAR");
    }
}