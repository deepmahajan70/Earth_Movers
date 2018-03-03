// Program to print the details of the system (use uname sys call)
// compare your result with uname command
// do man 2 uname to understand the uname() function and structure
//utsname
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<signal.h>
#include<time.h>
#include<sys/utsname.h>
main()
{
struct utsname u;
if(uname(&u)!=0)
fprintf(stderr, "Uname Error");
printf("\n %s %s %s %s %s\n",u.sysname,u.nodename,u.release,u.version,u.machine);
}
