//SWAPPING TWO NUMBERS 


#include <stdio.h>
int swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("TWO SWAPPED NUMBERS ARE %d AND %d",a,b);
    }

int main(){
    int m,n;
    printf("ENETR TWO NUMBER = ");
    scanf("%d %d",&m,&n);
    swap(m,n);   
}