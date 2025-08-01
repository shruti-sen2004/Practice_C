//PALINDROME OR NOT
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char a[100],b[100],rev[100];
    int n,i,j=0,temp;
    printf("\n ENTER A STRING=> ");
    gets(a);

    for(i=0; a[i]!='\0';i++);     // legth of the string
        printf("length= %d\n",i);

    for(i=0; a[i] !='\0';i++){    // copy the string 
        b[i]=a[i];
    }
    b[i]='\0';
    printf("STRING B= %s\n",b);
    
    for (n = i- 1; n >= 0; n--)  // reversing the string 
  	{
  		rev[j++] = a[n];
  	}
  	rev[n] = '\0';
    printf("REVERSE STRING= %s",rev);

    for(i=0; i<n && b[i]!= '\0';i++)    //PALINDROME OR NOT 
    {
        if(b[i]!= rev[i])
        {
            printf("\nNOT PALINDROME");
            exit(1);
        }
        else
          continue;
    }
  	printf("\nPALINDROME");
}  