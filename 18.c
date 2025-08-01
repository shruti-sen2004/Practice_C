//18.b)
// #include<stdio.h>
// void main(){
//     int i,j,n;
//     printf("Enter the number of terms= ");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++){
//         for(j=0;j<=i;j++){
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }

//18.c)
//#include<stdio.h>
// void main(){
//     int i,j,k,n;
//     printf("Enter the number of terms= ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=(n-i);j++){
//             printf("  ");
//         }
//         for(k=1;k<(2*i);k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

//18.a)
#include<stdio.h>
void main(){
    int i,j,s,n;
    printf("Enter the number of rows= ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(s=n-1;s>=i;s--)
          printf("  ");
        for(j=i;j<=2*i-1;j++)
           printf(" %d",j);
        for(j=2*i-2;j>=i;j--)
           printf(" %d",j); 
        
        printf("\n");
    }
}

//18.d)
//#include<stdio.h>
// void main(){
//     int i,j,n;
//     char c;
//     printf("Enter the number of terms= ");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++){
//         c='a';
//         for(j=0;j<=i;j++){
//             printf("%c",c);
//             c++;
//         }
//         printf("\n");
//     }
// }

//18.e)
//#include<stdio.h>
// void main(){
//     int i,j,n;
//     char c='a';
//     printf("Enter the number of terms= ");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++){
        
//         for(j=0;j<=i;j++){
//             printf("%c",c);    
//         }
//         c++;
//         printf("\n");
//     }
// }