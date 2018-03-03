Program to print the entries of passwd file for a given
user name or user ID
// do man getpwnam to understand getpwnam() function and passwd
structure
// also do cat /etc/passwd file and check what all information is given
in
// this file
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
char u_name[10];
char ch;
uid_t u_id;
struct passwd *p;
printf("Enter Your Choice\n");
printf("Whether you want to enter UNAME or UID?(N or I)");
scanf("%c",&ch);
if((ch == 'N')|| (ch == 'n'))
{
printf("Enter UNAME");
scanf("%s",u_name);
p=getpwnam(u_name);
printf("\n%s\n %s\n %d\n %d\n %s\n %s\n %s\n", p->pw_name, p-
>pw_passwd, p->pw_uid,p->pw_gid,p->pw_gecos, p->pw_dir, p->pw_shell);
}
else if((ch == 'I' || 'i'))
{
printf("Enter UID");
scanf("%d",&u_id);
p= getpwuid (u_id);
printf("\n%s %s %d %d %s %s %s\n", p->pw_name, p->pw_passwd,
p->pw_uid,p->pw_gid,p->pw_gecos, p->pw_dir, p->pw_shell);
}
else
printf("Wrong Choice");
}
