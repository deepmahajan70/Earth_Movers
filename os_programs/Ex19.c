// Program to implement rmdir command using system calls
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
main(int argc, char *argv[])
{
if(argc!=2)
{
fprintf(stderr,"Too Less Arguments");
exit(1);
}
// remove() can be used to remove a name from the file system.so
//remove can be used to remove files and directories. for using
//remove()we need to include <stdio.h>.
// remove basically calls unlink() for files and rmdir() for
//directories
// we can also use unlink() or rmdir() for removing files or
//directories respectively directly inplace of remove(). but
//remember to include the header file <unistd.h> if you are
using
//unlink() or rmdir()
if(remove(argv[1])!=0)
fprintf(stderr,"Error in Removing Directory");
exit(1);
}
