program that returns true if a given file is a directory &
false otherwise.
#include <stdio.h>
#include <time.h>
#include <sys/stat.h>
int main(int argc, char *argv[])
{
struct stat statbuf;
if (stat(argv[1], &statbuf) == -1)
{
perror ("Failed to get status of file/directory");
return 1;
}
else
{
if (S_ISDIR(statbuf.st_mode))
printf("%s : is a directory\n",argv[1]);
else
printf("%s : is a file\n",argv[1]);
}
return 0;
}
