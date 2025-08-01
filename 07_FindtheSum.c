//  print the following pattern
//  1 + 1/2 +1/4 +.........upto n terms
#include <stdio.h>
int main(){
    int n,i;
    float sum=0.0f;
    printf("ENTER THE NUMBER OF TERMS= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum += (1.0/i);

    printf("SUM= %0.4f",sum);
}