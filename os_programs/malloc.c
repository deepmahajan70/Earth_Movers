#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 char *str;
 /* Allocating memory */
 str=(char *)malloc(6);

 strcpy(str,"deepak");
 printf("String = %s,  Address = %u\n", str, str);

 /* Reallocating memory */
   str = (char *) realloc(str, 10);

   strcat(str, ".com");
   printf("String = %s,  Address = %u\n", str, str);

/* Deallocating (Free) memory */
   free(str);
   printf("String = %s,  Address = %u\n", str, str);
 return 0;
}
