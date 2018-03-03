Program to print all the information of file /etc/group for a given
group name or group ID
// do man getgrnam to get the information about getgrnam() function and
// structure group
// also do cat /etc/group and check what all information is written here
#include<grp.h>
#include<pwd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<signal.h>
#include<time.h>
#include<error.h>
#include<ctype.h>
main()
{
char g_name[10];
gid_t gid;
char ch;
struct group *g;
printf("Enter Your Choice: \n Enter Group Name(N) \n Enter Group ID (I)\n");
printf("Enter Choice");
scanf("%c",&ch);
switch(ch)
{
case 'N':
case 'n':
printf("Enter GNAME:");
scanf("%s",g_name);
g=getgrnam(g_name);
printf("\n %s %s %d\n", g->gr_name, g->gr_passwd, g-
>gr_gid);
break;
case 'I':
case 'i':
printf("Enter GID:");
scanf("%d",&gid);
g=getgrgid(gid);
printf("\n %s %s %d\n", g->gr_name, g->gr_passwd, g->gr_gid);
break;
default:
printf("Wrong Choice");
}
}
