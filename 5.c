//PRIME NUMBER between 1 to n 

#include<stdio.h>
int main(){
    int n,i,fact,j;
    printf("ENTER A NUMBER= ");
    scanf("%d",&n);
    printf("PRIME NUMBER BETWEEN 1 AND %d ARE:-",n);
    for(i=1;i<=n;i++){
        fact =0;
        for(j=1;j<=n;j++){
            if(i%j ==0)
              fact ++;
        }
        if (fact==2){
            printf("%d ",i);
        }
    }
}