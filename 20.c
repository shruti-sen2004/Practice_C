//TRANSPOSE OF A MATRIX

#include<stdio.h>
int main(){
    int i,j,a[4][4];
    printf("ENTER THE NUMBERS FOR 4x4 MATRIX:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
           scanf("%d ",&a[i][j]);
    }
    printf("MATRIX YOU HAVE ENTERED:-\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
           printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("TRANSPOSE OF THE MATRIX:-\n");
    for(j=0;j<4;j++){
        for(i=0;i<4;i++)
           printf("%d ",a[i][j]);
        printf("\n");
    }
}