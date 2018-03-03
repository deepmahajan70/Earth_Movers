//Write a program to print current (soft) limit and maximum (Hard)limits of all resources
// To print current and max limits of all resources // pg 180 WR stevens
// do man getrlimit for more details
// -1 may mean no limit set for the resource ie the limit is infinity
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/resource.h>
#include<sys/time.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<limits.h>
#include<unistd.h>
main()
{
struct rlimit rl;
int i;
printf("\n Resources Name \t Current Limit \tMax Limit \t");
for(i=0;i<=10;i++)
{
if(getrlimit(i, &rl)<0)
{
printf("Error in grelimit\n");
exit(1);
}
switch(i)
{
case RLIMIT_CPU :
printf("\nRLIMIT_CPU\t%d\t\t%d",rl.rlim_cur,rl.rlim_max);
break;
case RLIMIT_DATA:
printf("\nRLIMIT_DATA\t%d\t\t%d",rl.rlim_cur,rl.rlim_max);
break;
case RLIMIT_FSIZE:
printf("\nRLIMIT_FSIZE\t%d\t\t%d",rl.rlim_cur,rl.rlim_max);
break;
case RLIMIT_MEMLOCK:
printf("\nRLIMIT_MEMLOCK\t%d\t\t%d",rl.rlim_cur,rl.rlim_max);
break;
case RLIMIT_NOFILE:
printf("\nRLIMIT_NOFILE\t%d\t\t%d",rl.rlim_cur,rl.rlim_max);
break;
case RLIMIT_NPROC:
printf("\nRLIMIT_NPROC\t%d\t\t%d",rl.rlim_cur,rl.rlim_max);
break;
/*case RLIMIT_OFILE:
printf(Â"\nRLIMIT_OFILE\t%d\t\t%dÂ",rl.rlim_cur,rl.rlim_max);
break;*/
case RLIMIT_RSS:
printf("\nRLIMIT_RSS\t%d\t\t%d",rl.rlim_cur,rl.rlim_max);
break;
case RLIMIT_STACK:
printf("\nRLIMIT_STACK\t%d\t\t%d",rl.rlim_cur,rl.rlim_max);
break;
case RLIMIT_LOCKS:
printf("\nRLIMIT_LOCK\t%d\t\t%d",rl.rlim_cur,rl.rlim_max);
break;
}
}
}
