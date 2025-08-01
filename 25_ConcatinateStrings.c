//TO CONCATINATE TWO STRINGS WITHOUT STRCMP()
#include<stdio.h>
int main(){
    char str1[25],str2[25];
    int i=0,j=0;
    printf("ENTER THE FIRST STRING: ");
    gets(str1);
    printf("ENTER THE SECOND STRING: ");
    gets(str2);
    while(str1[i] != '\0')
      i++;
    while(str2[j] !='\0'){
        str1[i]=str2[j];
        j++;
        i++;
    }
    str1[i]='\0';
    printf("\nCONCATINATED STRNG IS= %s",str1);
}


