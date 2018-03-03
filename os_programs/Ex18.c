//program to create a empty directory using system calls
// Program to implement mkdir command using system calls
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
main(int argc, char *argv[])
{
if(argc!=2)
{
printf("Usages: ./a.out directory");
exit(1);
}
if(mkdir(argv[1],744)!=0)
printf("Error in Making Directory");
}
