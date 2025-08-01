#include<stdio.h>
int main(){
    float temp,new_temp;
    printf("ENTER THE TEMPERATURE IN FARENHEIT= ");
    scanf("%f",&temp);
    new_temp= (((temp-32)*5)/9);
    printf("TEMPRETURE IN CELCIUS IS= %f",new_temp);
}