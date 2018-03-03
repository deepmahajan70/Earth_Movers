//a program with an exit handler that outputs CPU usage.
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/times.h>
#include <time.h> //modified
static void showtimes(void)
{
time_t time1, time2;
time_t time_dif;
time1 = time(NULL); //man 2 time ; time(NULL) returns current time in
//seconds
printf("time1 : %ld",time1);
sleep(5); // man 3 sleep
time2 = time(NULL);
printf("time2 : %ld",time2);
time_dif = difftime(time2,time1); // man difftime
printf("the showtime slept for: %ld seconds\n",time_dif);
}
int main(void)
{
if (atexit(showtimes)) // man atexit
{
fprintf(stderr, "Failed to install showtimes exit handler\n");
return 1;
}
/* rest of main program goes here */
return 0;
}
