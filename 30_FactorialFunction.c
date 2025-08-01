//FACTORIAL WITHOUT RECURSION 

#include <stdio.h>
int f(int n){
    int i=1,f=1;
    for(i;i<=n;i++){
       f=f*i;
    }
    return f;
    }

//FACTORIAL WITH RECURSION 

#include <stdio.h>
int f(int n){
    if (n==0)
       return 1;
    else 
       return n*f(n-1);
}

int main(){
    int n;
    printf("ENETR A NUMBER = ");
    scanf("%d",&n);
    printf("THE FACTORIAL OF %d is %d",n,f(n));
    
}