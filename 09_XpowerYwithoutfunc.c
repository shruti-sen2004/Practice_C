//X to the power of y

#include <stdio.h>
void main(){
    int x,y,pow=1,i;
    printf("ENTER TWO NUMBER: ");
    scanf("%d %d",&x, &y);
    for(i=1;i<=y;i++)
        pow *=x  ;
    printf("%d Power %d= %d",x,y,pow);
}