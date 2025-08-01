#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    int n;
    printf("ENTER A STRING= ");
    gets(a);
    for(n=0; a[n]!='\0';n++);
        printf("LENGTH OF THE STRING IS %d",n);
}