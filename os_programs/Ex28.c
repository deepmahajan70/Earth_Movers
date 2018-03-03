//program which prints the seconds part of current time
//whenever the SIGALRM signal is received by the program.
// After two seconds print TM_SEC fileld of tm structure using alarm
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<signal.h>
#include<time.h>
#include<unistd.h>
void sig_hand(int);
main()
{
int i=1;
pid_t pid;
if(signal(SIGALRM,sig_hand)==SIG_ERR)
{
printf("Not Registered");
}
while(i<=5)
{
i++;
pid=getpid();
sleep(2);
kill(pid,SIGALRM);
}
}
void sig_hand(int sig)
{
struct tm *t; // this structure defination can be got by man
//localtime
time_t tt; // used for time in seconds
if(sig==SIGALRM)
{
tt=time(NULL); //returns current time in sec since epoc (do
man 2 time)
t=localtime(&tt); // break down time in hr, min, sec, etc (do
man localtime)
printf("%d\n",t->tm_sec);// new line is necessary here
}
}
