//TOWER OF HANOI WITH N DISKS

#include<stdio.h>
void TOH(int n, char x,char y ,char z){
    if (n==1)
       printf("Move disk 1 from %c -> %c\n",x,y);
    else{
        TOH(n-1,x,z,y);
        printf("Move disk %d from %c -> %c\n",n,x,y);
        TOH(n-1,z,y,x);
    }
}
void main(){
    int n;
    printf("ENTER THE NUMBER OF DISKS= ");
    scanf("%d",&n);
    TOH(n,'A','C','B');
}