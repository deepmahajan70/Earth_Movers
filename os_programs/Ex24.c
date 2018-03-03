//program to display the permission of a given file
/*Program that display file permission of a given file.*/
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
printf("Can Accept only two arguments");
exit(1);
}
check=stat(argv[1], &statbuff);
if(check==0)
{
//check Permission for Owner
if((statbuff.st_mode & S_IRUSR)==S_IRUSR)
printf("Owner has Read Permission\n");
if((statbuff.st_mode & S_IWUSR)==S_IWUSR)
printf("Owner has Write Permission\n");
if((statbuff.st_mode & S_IXUSR)==S_IXUSR)
printf("Owner has Execute Permission\n");
// check Permission for Group
if((statbuff.st_mode & S_IRGRP)==S_IRGRP)
printf("Group has Read Permission\n");
if((statbuff.st_mode & S_IWGRP)==S_IWGRP)
printf("Group has Write Permission\n");
if((statbuff.st_mode & S_IXGRP)==S_IXGRP)
printf("Group has Execute Permission\n");
// check Permission for Others
if((statbuff.st_mode & S_IROTH)==S_IROTH)
printf("Others has Read Permission\n");
if((statbuff.st_mode & S_IWOTH)==S_IWOTH)
printf("Others has Write Permission\n");
if((statbuff.st_mode & S_IXOTH)==S_IXOTH)
printf("Others has Executed Permission\n");
}
}
