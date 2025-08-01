//FIBONACCI SERIES WITHOUT RECURSION

#include <stdio.h>
int fibo(int n){
    int i=0,term1=0,term2=1,nextterm;
    for(i;i<=n;i++){
        printf("%d ",term1);
        nextterm= term1+term2;
        term1=term2;
        term2=nextterm;
    }
}

int main(){
    int n;
    printf("ENETR THE NUMBER OF TERMS TO BE PRINTED= ");
    scanf("%d",&n);
    printf("fibonacci series: ");
    fibo(n);
}


// FIBONACCI SERIES WITH RECURSION

#include <stdio.h>
int fib(int n){
    if (n==0)
       return 0;
    else if(n==1)
       return 1;
    else
       return(fib(n-1)+fib(n-2));
}
int main(){
    int n,i;
    printf("ENETR THE NUMBER OF TERMS TO BE PRINTED= ");
    scanf("%d",&n);
    printf("fibonacci series: ");
    for (i=0;i<n;i++)
      printf("%d ",fib(i));
}
