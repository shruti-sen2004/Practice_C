#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str1[25],str2[25];
    int n,i;
    printf("\nENTER THE FIRST STRING: ");
    gets(str1);
    printf("\nENTER THE SECOND STRING: ");
    gets(str2);
    for(n=0;str1[n] !='\0';n++){
        for(i=0; i<n && str1[i]!= '\0';i++)
            if(str1[i] != str2[i]){
               printf("STRINGS ARE NOT EQUAL!!");
               exit(1);
            }
    else
        continue;
    }
    printf("\nSTRINGS ARE EQUAL");
    return 0;
}