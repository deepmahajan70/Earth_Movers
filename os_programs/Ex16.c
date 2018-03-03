//program for which output is automatically directed to a
//named file rather than on to the console
/*Program to create a file using dup fun (redirect output to some
existing file.)*/
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{
int fd;
if((fd=open("test1",O_WRONLY|O_CREAT))<0)
{
printf("Error in opening file..\n");
exit(1);
}
close(1);
dup(fd);
printf("New Fun");
close(fd);
return (0);
}
