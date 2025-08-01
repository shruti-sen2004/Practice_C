//SWAP TWO NUMBERS WITHOUT THIRD VARIABLE

#include <stdio.h>
int main(){
    int x,y;
    printf("ENTER TWO NUMBERS= ");
    scanf("%d %d",&x, &y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("AFTER SWAP THE NUMBERS ARE: %d AND %d",x,y);
}