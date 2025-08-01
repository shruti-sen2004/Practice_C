//LARGEST NUMBER OF A 5*5 MATRIX
#include<stdio.h>
int main(){
    int i,j,n,max=0;
    printf("ENTER THE NUMBER OF ROWS AND COLUMNS: ");
    scanf("%d",&n);
    int a[n][n];
    printf("ENTER THE NUMBERS FOR nxn MATRIX:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
           scanf("%d ",&a[i][j]);
    }
    printf("MATRIX YOU HAVE ENTERED:-\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
           printf("%d ",a[i][j]);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
                max=a[i][j];
        }
    }
    printf("The largest element from the above matrix is %d",max);
}
