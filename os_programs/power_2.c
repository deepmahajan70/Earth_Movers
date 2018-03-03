#include<stdio.h>
int main()
{
int power;
unsigned int answer;
int lower=0,upper=32;
power=lower;
system("clear");
printf("%c[%d;%df 2's Power Table\n",0x1B,20,20);
printf("2's Power\tAnswer\n");
for(power=0;power<=upper;power++)  
  {
    answer=cal(power);
    printf("\n_________________________");
    printf("\n%d\t\t%i",power,answer);
   }
return 0;
}

int cal(int p)
{
int i;
unsigned int a=1;
for(i=0;i<p;i++)
   a=a*2;
return a;
}

