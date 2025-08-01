//FACTORIAL OF A NUMBER 

#include <stdio.h>
void main(){
    int n,f=1,i;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        f=f*i;
    printf("FACTORIAL= %d",f);
}