#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];
    int n,i;
    printf("ENTER STRING A= ");
    gets(a);
    for(i=0; a[i] !='\0';i++){
        b[i]=a[i];
    }
    b[i]='\0';
    printf("String B: %s", b);
    return 0;
}