program that prints out various user & group ID’s.
#include <stdio.h>
#include <unistd.h>
int main(void)
{
// man getuid, man getid
printf("My real user ID is %5ld\n",(long)getuid());
printf("My effective user ID is%5ld\n",(long)geteuid());
printf("My real group ID is %5ld\n",(long)getgid());
printf("My effective group ID is %5ld\n",(long)getegid());
return 0;
}








