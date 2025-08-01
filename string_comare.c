// #include<stdio.h>

// void square(int a,int b, int c){
//     int sum=0;
//     sum= a*a + b*b + c*c;
//     printf("sum=%d",sum);
// }

// void main(){
//     int x,y,z;
//     printf("ENTER THREE NUMBERS: \n");
//     scanf("%d %d %d", &x ,&y ,&z);
//     square(x,y,z);
// }

#include<stdio.h>
int main(){
    int n,sum=0,i,d,m;
    
    printf("ENTER A NUMBER= ");
    scanf("%d",&n);
    m=n;
    for(i=0;i<3;i++){
        d= n%10;
        n=n/10;
        sum += d*d*d;
    }
    printf("%d",sum);
    if(sum == m){
        printf("\nIT IS AN ARMSTRONG NUMBER!");
    }
    else{
        printf("\nNOT ARMSTRONG!!");
    }
}