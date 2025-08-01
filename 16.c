//REVERSE OF A NUMBER

#include <stdio.h>
int main(){
    int n,rev_num=0,i,dig=0;
    printf("ENTER A 5-DIGIT NUMBER= ");
    scanf("%d",&n);
    if(n>10000 && n<99999){
        for(i=0;i<5;i++){
            dig=n%10;
            n= n/10;
            rev_num = rev_num *10 + dig;
        }
        printf("REVERSE STRING IS= %d",rev_num);
    }
}