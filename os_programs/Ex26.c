// Program to handle SIGUSR1 and SIGUSR2 intrrupt
// Run this prog on background (./a.out&) and kill -s USR1 pid or kill
USR2
//pid to supply these interrupt
//do man 2 signal and understand this function's parameter types and
return
//value vary clearly
//do man 2 pause and understand this function's parameter types and
return
//value vary clearly
// do man signal.h to know the various (signal), their (default action)
and
// their (description)
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<signal.h>
#include<unistd.h>
void fun(int);
main()
{
char a[200];
if((signal(SIGUSR1,fun))==SIG_ERR)
{
printf("Handler not registered\n");
exit(1);
}
if((signal(SIGUSR2,fun))==SIG_ERR)
{
printf("Handler not registered\n");
exit(1);
}
while(1)
pause(); // include <unistd.h>
}
void fun(int i)
{
if(i==SIGUSR1)
{
printf("SIGUSR1 INTRRUPT");
fflush(NULL);
}
else if(i==SIGUSR2)
{
printf("SIGUSR2 INTRRUPT");
fflush(NULL);
}
//raise(SIGKILL);
}
