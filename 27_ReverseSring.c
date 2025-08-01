#include <stdio.h>
int main()
{
   char s[1000], r[1000];
   int i, j, n = 0;

   printf("Input a string: ");
   gets(s);

   while (s[n] != '\0')
      n++;

   j= n - 1;

   for (i = 0; i< n; i++) {
      r[i] = s[j];
      j--;
   }

   r[i] = '\0';

   printf("Reversed string is: %s", r);

   return 0;
}