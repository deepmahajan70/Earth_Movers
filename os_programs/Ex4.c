//Program which will print the list of environment variable and also print the value of the PATH system variable
//To print all environment variables
#include<stdio.h>
#include<stdlib.h>
extern char **environ;// the external variable environ points to the
//process environment list when the process begins executing.
// do man environ
int main(void)
{
int i;
char *path;
printf("The environment list follows: \n");
for(i=0;environ[i] != NULL; i++)
printf("environ[%d]: %s\n", i, environ[i]);
if ((path =getenv("PATH")) == NULL)// do man getenv
printf("PATH environment variable not set\n");
else
printf("The value of PATH variable = %s\n", path);
return 0;
}
