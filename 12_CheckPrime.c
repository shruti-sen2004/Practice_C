//PRIME NUMBER OR NOT 
#include <stdio.h>
int main(){
    int i=1,n,c;
    printf("ENTER A NUMBER= ");
    scanf("%d",&n);
    c=0;
    for(i;i<=n;i++){
        if (n%i==0){
            c++;
        }
        
    }
    if(c==2){
        printf("%d IS A PRIME NUMBER",n);
    }
    else{
        printf("%d IS NOT A PRIME NUMBER",n);
    }
}