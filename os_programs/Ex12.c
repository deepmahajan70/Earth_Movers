program to show that same opened file can be shared by both
parent and child processes
// To check whether a parent process and child process should same
opened file or not
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
FILE *fp;
int fd;
char ch;
fp=fopen("test","w");
fprintf(fp,"%s\n","This line is written by PARRENT PROCESS");
fflush(NULL);
fd=fork();
if(fd < 0)
{
printf("Fork Error");
exit(1);
}
if(fd == 0)
{
fprintf(fp,"%s","This line is written by CHILD PROCESS\n");
fclose(fp);
fp=fopen("test","r");
while(!feof(fp))
printf("%c",getc(fp));
}
if(fd > 0)
{
// man 2 wait
if (fd != wait(NULL))
/* parent code */
{
perror("Parent failed to wait due to signal or
error");
return 1;
}
}
fclose(fp);
return 0;
}
