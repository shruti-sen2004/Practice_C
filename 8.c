//SOLVE A QUADRATIC EQUATION

#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,x,y;
    printf("enter the value of a,b and c= ");
    scanf("%d %d %d",&a, &b,&c);
    if(a==0 && b==0){
        printf("THERE IS NO SOLUTION");
    }
    else if(a==0){
        printf("THERE IS ONLY ONE SOLUTION");
        x= -c/b;
        printf("\nTHE SOLUTION IS %d",x);
    }
    else if(((b*b)-4*a*c)<0){
        printf("THERE IS NO REAL ROOTS");
    }
    else{
        printf("THE WQUATION HAS TWO ROOTS");
        x= ((-b+ sqrt((b*b)-4*a*c))/(2*a));
        y= ((-b- sqrt((b*b)-4*a*c))/(2*a));
        printf("\nTHE ROOTS ARE %d AND %d", x,y);
    }
}