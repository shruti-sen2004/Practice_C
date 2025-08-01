//GRADE SYSTEM USING SWITCH CASE

#include<stdio.h>
int main(){
    int marks;
    printf("ENTER YOUR MARKS: ");
    scanf("%d",&marks);
    switch(marks/10){
        case 10:
        case 9:
           printf("GRADE O");
           break;
        case 8:
           printf("GRADE E");
           break;
        case 7:
           printf("GRADE A");
           break;
        case 6:
           printf("GRADE B");
           break;
        case 5:
           printf("GRADE C");
           break;
        case 4:
           printf("GRADE D");
           break;
        default:
           printf("FAIL!!");
    }
}