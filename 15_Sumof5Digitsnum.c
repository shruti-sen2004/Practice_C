#include <stdio.h>
int main(){
    int n,sum=0;
    printf("ENTER A 5-DIGIT NUMBER= ");
    scanf("%d",&n);
    if(n>=10000 && n<=99999){
    while(n !=0){
        sum += n%10;
        n= n/10;
    }
        printf("SUM= %d",sum);
    }
    else
        printf("ENTER A 5-DIGIT NUMBER!!");
 
}