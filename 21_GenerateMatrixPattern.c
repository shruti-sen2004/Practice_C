//PRINT OUT THE PATTERN
//    1 0 0 0 0
//    0 1 0 0 0
//    0 0 1 0 0 
//    0 0 0 1 0
//    0 0 0 0 1

#include<stdio.h>
void main(){
    int i,j,n;
    printf("ENTER THE NO. OF ROWS AND COLUMNS= ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)
              a[i][j]=1;
            else
              a[i][j]=0;
        }
    }
    printf("THE REQUIRED %d*%d array pattern is:\n",n,n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }
}