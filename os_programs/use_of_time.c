#include <stdio.h>
#include <time.h>

int main ()
{  int i;
   time_t seconds = time(NULL);
   clock_t begin, end;
   long double b,e;
   long double time_spent;
   b= clock();
   printf("begin = %Lf\n", b/ CLOCKS_PER_SEC);
   for(i=0;i<10;i++)
      ;
   printf("Seconds since January 1, 1970 = %ld\n", seconds);
   printf("Minutes since January 1, 1970 = %ld\n", seconds/60);
   printf("Hours since January 1, 1970 = %ld\n", seconds/3600);
   printf("Days since January 1, 1970 = %ld\n", seconds/86400);
   printf("Years since January 1, 1970 = %ld\n", seconds/31536000);
   e= clock();
   printf("end = %Lf\n", e/ CLOCKS_PER_SEC);
   time_spent = (long double)(e- b) / CLOCKS_PER_SEC;
   printf("Time spend by process = %Lf\n", time_spent);
   return(0);
}
