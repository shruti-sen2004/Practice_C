// HCF of two numbers
#include <stdio.h>
int HCF(int m,int n){
    if (n==0)
      return m;
    else
      return HCF(n,m%n);
}
void main(){
    int a,b;
    printf("ENTER TWO NUMBER= ");
    scanf("%d",&a,&b);
    printf("HCF OF TWO NUMBER IS = %d",HCF(a,b));
}