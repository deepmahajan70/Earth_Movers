program which suspends itself till it receives a SIGALARM
signal
//Program to write own sleep command using alarm and pause
// do man 2 alarm to know about the function alarm()
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<signal.h>
#include<unistd.h>
void sig_alrm(int);
main(int argc, char *argv[])
{
if((signal(SIGALRM, sig_alrm))==SIG_ERR)
printf("Not Registered");
alarm(5);
pause();
}
void sig_alrm(int sig)
{
if(sig==SIGALRM)
printf("Wake Up");
}
