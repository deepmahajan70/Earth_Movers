program that can display the type of a given file like
regular, directory etc
/*Write C Program (Using only system calls)
1. That can display the type of a given file like regular, directory.*/
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
main(int argc, char *argv[])
{
struct stat statbuff;
int check;
if(argc!=2)
{
printf("Can accept only two arguments");
exit(1);
}
check=stat(argv[1], &statbuff);
if(check==0)
{
if(S_ISREG(statbuff.st_mode))
printf("Regular FIle");
else if(S_ISDIR(statbuff.st_mode))
printf("Directory");
else if(S_ISCHR(statbuff.st_mode))
printf("Char Device");
else
printf("Other File");
}
}
