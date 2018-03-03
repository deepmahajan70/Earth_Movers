//Program that prints it’s & it’s parent’s process ID.
#include <unistd.h>
int main (void)
{
printf("I am process %ld\n", (long)getpid()); //man getpid
printf("My parent is %ld\n", (long)getppid());
return 0;
}
