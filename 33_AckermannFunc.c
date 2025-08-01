//ACKERMANN FUNCTION USING RECURSSION
#include<stdio.h>
#include<stdlib.h>
int A(int m,int n){
    if(m==0)
       return n+1;
    else if(m>0 && n==0)
       return A(m-1,1);
    else if(m>0 && n>0)
       return A(m-1,A(m,n-1));
    else
    {
        printf("INVALID INPUT!!");
        exit(1);
    }
}
void main(){
    int a,b;
    printf("ENTER THE VALUE OF A AND B= ");
    scanf("%d %d",&a,&b);
    printf("THE REQUIRED ACKERMANN VALUE IS=%d",A(a,b));
}