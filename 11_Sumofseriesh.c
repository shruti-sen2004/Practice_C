//PRINT THE PATTERN OF THE FOLLOWING SERIES
// -1 + 1/3! - 1/5! + 1/7!......upto n terms

#include <stdio.h>
int main(){
    int i,j,f=1,n,c=1;
    float sum=0.0f;
    printf("ENTER THE NUMBER OF TERMS: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for (j=1;j<=c;j++)
            f=f*j;
        if (i%2==0)
           sum += (1.0/f);
        else
           sum -= (1.0/f);
        c=c+2;
    }
    printf("SUM= %0.4f",sum);
}
